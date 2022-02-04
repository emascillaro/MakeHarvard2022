import cv2
from image_capture import Capture_image
import pytesseract

# Takes image
Capture_image()

# Reads Image
img = cv2.imread("Capture_Image.jpg")

# Converts Image to String
text = pytesseract.image_to_string(img)
print(text)