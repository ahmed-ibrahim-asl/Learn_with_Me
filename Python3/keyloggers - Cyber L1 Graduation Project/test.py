import logging
from pynput import keyboard


import platform
import pygetwindow as gw
import psutil

# Define a function to get the active window's title
def get_active_window_title():
    if platform.system() == 'Windows':
        return gw.getActiveWindow().title
    
    # Note: Darwin is kernel for mac os
    elif platform.system() == 'Darwin':
        return gw.getActiveWindowTitle()
    
    elif platform.system() == 'Linux':
        
        
        # here we retriving the name and cmdline of each process
        for proc in psutil.process_iter(['name', 'cmdline']):
            if len(proc.info['cmdline']) > 0:
                # check if window associated with that  process 
                if gw.getWindowsWithTitle(proc.info['cmdline'][0]):
                    return gw.getWindowsWithTitle(proc.info['cmdline'][0])[0].title

# Define a function to handle key presses
def on_press(key):
    program_name = get_active_window_title()
    print(f'Key {key} pressed in program {program_name}')

# Set up the listener
with keyboard.Listener(on_press=on_press) as listener:
    listener.join()
