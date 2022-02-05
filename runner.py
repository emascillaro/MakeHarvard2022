import cv2
import pytesseract
import os

from image_capture import Capture_image
from image_to_text import image_to_text_string


text = image_to_text_string().lower()
print(text)


for i in text:
    print(f"The current character is {i}")
    os.system(f"cd {i}")
    os.system(f"arduino --upload {i}.ino --port /dev/ttyUSB*")
    os.system("cd ..")