import pyautogui
import keyboard
import pywhatkit
import datetime

#####################################################################
### A Fix for preserving the format of the message for fifi #########
# pyautogui.click(618, 519)
# message = []
# with open('message.txt', 'r', encoding='utf-8') as f:
    
#     for line in f.readlines():
#         keyboard.write( line )

import webbrowser

phone_number = "+201093310886"
url = f"https://wa.me/{phone_number}"

webbrowser.open(url)
################S####################################################


# import tkinter as tk
# from tkinter import filedialog

# def browse_file():
#     file_path = filedialog.askopenfilename()
#     # Do something with the selected file path, such as displaying it or using it in your code
#     print("Selected file:", file_path)
    

# # Create the Tkinter window
# window = tk.Tk()

# # Create the button widget
# window.title('Fifi - Select phone Number List')
# window.geometry(f"{350}x50")

# browse_button = tk.Button(window, text="Browse", command=browse_file, width=20)
# # Pack the button widget onto the window
# browse_button.pack()

# # Run the Tkinter event loop
# window.mainloop() 