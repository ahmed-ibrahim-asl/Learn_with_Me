import cv2
import numpy as np
from PIL import ImageGrab, Image
import pyautogui

def take_screenshot():
    # Take a screenshot using PIL's ImageGrab
    screenshot = ImageGrab.grab()
    screenshot.save('screenshot.png')  # Save the screenshot
    return screenshot

def find_logo_on_screen(logo_path, screenshot_path):
    # Read the logo and the screenshot
    logo = cv2.imread(logo_path, cv2.IMREAD_UNCHANGED)
    screenshot = cv2.imread(screenshot_path)

    # Match the logo in the screenshot
    result = cv2.matchTemplate(screenshot, logo, cv2.TM_CCOEFF_NORMED)



    #! Look more into that section
    # Get the location of the logo in the screenshot
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
   
    logo_height, logo_width = logo.shape[:2]
    print("=> " + str(logo_height.shape))
    # Define the top left of the found logo
    top_left = max_loc
    bottom_right = (top_left[0] + logo_width, top_left[1] + logo_height)

    return top_left, bottom_right
    #!!!!!!

def move_mouse_to_logo(top_left, bottom_right):
    # Calculate the center of the logo
    center_x = top_left[0] + (bottom_right[0] - top_left[0]) // 2
    center_y = top_left[1] + (bottom_right[1] - top_left[1]) // 2


    

    # Move the mouse to the center of the logo
    pyautogui.moveTo(center_x, center_y)
    pyautogui.click(center_x, center_y)

# Usage Example
logo_path = 'C:\\Users\\ad\Desktop\\Fifi - Open Cv Tinkering\\Final\\Record.jpg'  # Path to the logo image
screenshot = take_screenshot()  # Take a screenshot
top_left, bottom_right = find_logo_on_screen(logo_path, 'screenshot.png')
print(top_left + bottom_right)
move_mouse_to_logo(top_left, bottom_right)
