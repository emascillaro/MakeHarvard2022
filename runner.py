import cv2
import pytesseract
import os
import re
import time
import PIL
from PIL import Image,ImageTk
from tkinter import *
import tkinter as tk

from interface import capture_image
from image_to_text import image_to_text_string
from interface import show_frame


# Create Tkinter Window
width, height = 800, 600
cap = cv2.VideoCapture(-1)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, width)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, height)

root = Tk()
root.bind('<Escape>', lambda e: root.quit())
lmain = Label(root)
lmain.pack()

# Takes image when button is pressed
image_capture = tk.Button(text="Take Picture", command = capture_image)
image_capture.pack()

print("Opening Application")

show_frame()
root.mainloop()



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