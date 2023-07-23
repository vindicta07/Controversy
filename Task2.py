
# Importing the libraries OpenCV and numpy! Please Don't forget to download it from terminal!
import cv2
import numpy as np

# Get the image source from the File Directory!
img = cv2.imread("C:/Users/YASH PATHAK/PycharmProjects/pythonProject/image_clipdrop-relight (1).jpg")

# Resizing the image to a given value!
image = cv2.resize(img, (1024, 1024))

# Convert Image to Image HSV!
hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

# Defining lower and upper HSV value! In this I have used Red Color Scale HSV!
low = np.array([160, 100, 20])
up = np.array([179, 255, 255])

# To Define mask for showcasing HSV!
mask = cv2.inRange(hsv, low, up)

# To show mask and image window as the Output Screen!
cv2.imshow("Image", image)
cv2.imshow("Mask", mask)

# WAITKEY to put python in sleep
cv2.waitKey(0)
cv2.destroyAllWindows()

# HSV Color Scale: The HSV (which stands for Hue Saturation Value)
# scale provides a numerical readout of your image that corresponds
# to the color names contained therein.
# Hue is measured in degrees from 0 to 360.
