
#Load the image of the record button you want to click
button_record_image = cv2.imread("test.jpg")



# Convert the screen image to a NumPy array
screen_image_array = np.array(pyautogui.screenshot())

# Show the screen image
cv2.imshow("Screenshot", screen_image_array)
# -----------------
# Find the coordinates of the button in the screen image
button_coordinates = cv2.matchTemplate(screen_image_array, button_record_image, cv2.TM_SQDIFF_NORMED)

print(str(button_coordinates[0][0]) + " " + str(button_coordinates[0][1]) )

cv2.destroyAllWindows()
