import cv2
import pytesseract
import os
import re
import time
import PIL
#from PIL import Image,ImageTk
import PIL.Image
from tkinter import *
import tkinter as tk

from interface import capture_image
from image_to_text import image_to_text_string
from interface import show_frame

# Save and Process Text
text = image_to_text_string().lower()
cleaned_text = re.sub(r'\W+', '', text)

print(cleaned_text)

text_file = open("data.txt", "w")
text_file.write(cleaned_text)
text_file.close()

# Compile Arduino Code
for i in cleaned_text:
    print(f"The current character is {i}")
    os.chdir(f"/home/emascillaro/Documents/Emma/Hackathons/MakeMIT_2022/MakeMIT2022/{i}")
    os.system(f"arduino --upload {i}.ino --port /dev/ttyACM*")
    os.chdir("/home/emascillaro/Documents/Emma/Hackathons/MakeMIT_2022/MakeMIT2022")

    time.sleep(10)