import cv2
import pyautogui
import numpy as np

# Take a screenshot using PyAutoGUI
screenshot = pyautogui.screenshot()
screenshot_np = np.array(screenshot)
template = cv2.cvtColor(screenshot_np, cv2.COLOR_RGB2BGR)



img_rgb = cv2.imread('tt.jpg')


w, h = template.shape[:-1]

res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
print(res)
cv2.imwrite('result.png', img_rgb)