import cv2
from PIL import ImageGrab, Image
import pyautogui

def take_screenshot():
    # Take a screenshot using PIL's ImageGrab
    screenshot = ImageGrab.grab()
    screenshot.save('screenshot.png')  # Save the screenshot
    return screenshot

def find_logo_on_screen(logo_path, screenshot_path):
    


    #? Imread explaination
    #   > Read image and output array or matrix contain pixel values that
    #     define its color (and transperency, if available).

    #? what cv2.IMREAD_UNCHANGED
    #   > flag used to ensures that alpha channel it contained in matrix

    #? what is alpha channel  
    #   > A channel which has additional information about transparency 
    #     for each pixel

 
    # Read the logo and the screenshot
    logo = cv2.imread(logo_path, cv2.IMREAD_UNCHANGED)
    screenshot = cv2.imread(screenshot_path)
    
    
    #? How template matching works ?!
    #  it slides the logo on top of screenshot and start compare both them
    #  based on specified method which is third parameter of 
    #  cv2.matchTemplate(), method


    #? Correlation coefficient: 
    # reflects how well the template matches with different parts of the image


    ##? Template matching Methods ###
    # 1. TM_SQDIFF:             
        # Imagine you have two photographs of a painting taken in the same lighting conditions.
        # TM_SQDIFF would be ideal for comparing these photos to confirm they are the same painting, 
        # as it identifies the area of least difference.
    
    # 2. TM_SQDIFF_NORMED:     
        #  Suppose you have a photo of a car and you're comparing it to a slightly brighter or smaller image of the same car.
        #  it can spot these small differences 
   
    # 3. TM_CCORR:       
        #   it is more about matching areas with a overall brighness intensities and return positions

    # 4. TM_CCORR_NORMED:       
        #    If you're looking for a logo in a photo where the logo might be slightly faded or brighter than your template, 
        #    TM_CCORR_NORMED would work well. It can handle variations in brightness better.

    # 5. TM_CCOEFF:         
        #    For instance, you're trying to find a specific pattern in a textile image.
        #    TM_CCOEFF would be useful because it focuses on how well the patterns match, regardless of the overall brightness.                       
    # 5. TM_CCOEFF_NORMED:      
        # Imagine you're looking for a facial feature in a set of portraits where the lighting varies. 
        # TM_CCOEFF_NORMED would be ideal as it's adaptable to different lighting conditions and subtle changes in the feature's appearance.


    # Match the logo in the screenshot
    result = cv2.matchTemplate(screenshot, logo, cv2.TM_CCORR_NORMED)



    
    # Get the location of the logo in the screenshot
    
    # min_loc -> refers to location of worst founded match
    # max_loc -> refers to location of best founded match
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
   



    logo_height, logo_width = logo.shape[:2]
   
    # Define the top left of the found logo
    top_left = max_loc
    bottom_right = (top_left[0] + logo_width, top_left[1] + logo_height)

    return top_left, bottom_right
    

def move_mouse_to_logo(top_left, bottom_right):
    # Calculate the center of the logo
    center_x = top_left[0] + (bottom_right[0] - top_left[0]) // 2
    center_y = top_left[1] + (bottom_right[1] - top_left[1]) // 2


    

    # Move the mouse to the center of the logo
    pyautogui.moveTo(center_x, center_y)
    pyautogui.click(center_x, center_y)






#! Usage Example
logo_path = 'C:\\Users\\ad\Desktop\\Fifi - Open Cv Tinkering\\Final\\Record.jpg'  # Path to the logo image
screenshot = take_screenshot()  # Take a screenshot
top_left, bottom_right = find_logo_on_screen(logo_path, 'screenshot.png')
print(top_left + bottom_right)
move_mouse_to_logo(top_left, bottom_right)
