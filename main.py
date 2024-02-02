import cv2
import numpy as np


def color_detect(img, color_range):
    # Convert image to LAB color space
    lab_img = cv2.cvtColor(img, cv2.COLOR_BGR2LAB)

    # Define lower and upper bounds for the specified color range in LAB color space
    lower_bound = np.array(color_range['min'], dtype=np.uint8)
    upper_bound = np.array(color_range['max'], dtype=np.uint8)

    # Create a mask for the specified color range
    mask = cv2.inRange(lab_img, lower_bound, upper_bound)

    # Find contours in the mask
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    detected_color = None
    if contours:
        # Get the contour with the largest area
        max_contour = max(contours, key=cv2.contourArea)

        # Get the centroid of the largest contour
        M = cv2.moments(max_contour)
        centroid_x = int(M['m10'] / M['m00'])
        centroid_y = int(M['m01'] / M['m00'])

        # Draw the contour and centroid on the image
        cv2.drawContours(img, [max_contour], -1, (0, 255, 0), 2)
        cv2.circle(img, (centroid_x, centroid_y), 5, (0, 0, 255), -1)

        # Get the detected color based on the color range
        detected_color = next((color for color, value in color_range.items() if
                               value['min'] == list(lower_bound) and value['max'] == list(upper_bound)), None)

    return img, detected_color


if __name__ == "__main__":
    # Define color ranges for red and blue detection (min and max values in LAB color space)
    color_ranges = {
        'red': {'min': [0, 120, 120], 'max': [255, 140, 140]},
        'blue': {'min': [0, 0, 0], 'max': [255, 255, 255]}
    }

    # Open camera
    cap = cv2.VideoCapture(0)

    while True:
        ret, frame = cap.read()
        if not ret:
            break

        # Resize frame for faster processing (optional)
        frame = cv2.resize(frame, (640, 480))

        # Perform color detection for each color range
        for color_name, color_range in color_ranges.items():
            processed_frame, detected_color = color_detect(frame.copy(), color_range)

            # Display detected color (if any)
            if detected_color:
                cv2.putText(processed_frame, f'Detected Color: {detected_color}', (20, 40), cv2.FONT_HERSHEY_SIMPLEX, 1,
                            (0, 255, 0), 2)

        # Display processed frame
        cv2.imshow('Color Detection', processed_frame)

        if cv2.waitKey(1) & 0xFF == 27:  # Press 'Esc' to exit
            break

    # Release resources
    cap.release()
    cv2.destroyAllWindows()
