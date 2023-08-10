import cv2
import numpy as np

def detect_spherical_objects():
    # Create VideoCapture object for the USB camera
    cap = cv2.VideoCapture(0)

    while True:
        # Read a frame from the camera
        ret, frame = cap.read()

        if not ret:
            break

        # Convert the frame to grayscale for better processing
        gray_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        # Perform Gaussian blur to reduce noise and improve object detection
        blurred_frame = cv2.GaussianBlur(gray_frame, (9, 9), 0)

        # Use the Hough Circle Transform to detect circular objects
        circles = cv2.HoughCircles(blurred_frame, cv2.HOUGH_GRADIENT, dp=1, minDist=20,
                                   param1=50, param2=30, minRadius=5, maxRadius=100)

        if circles is not None:
            circles = np.round(circles[0, :]).astype("int")


            hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
            lower_bound = np.array([5, 100, 100])
            upper_bound = np.array([20, 255, 255])
            mask = cv2.inRange(hsv_frame, lower_bound, upper_bound)
            for (x, y, radius) in circles:
                if mask[y, x] == 255:  # Check if the center of the circle is within the orange mask
                    cv2.circle(frame, (x, y), radius, (0, 255, 0), 4)

        # Show the frame with detected objects
        cv2.imshow("Spherical Object Detection", frame)

        # Exit the loop when 'q' key is pressed
        if cv2.waitKey(1) & 0xFF == ord("q"):
            break

    # Release the camera and close the window
    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    detect_spherical_objects()
