
import socket


def client_program():
    host = socket.gethostname()  # as both code is running on same pc
    port = 5000  # socket server port number

    client_socket = socket.socket(
        socket.AF_INET, socket.SOCK_STREAM)  # instantiate
    client_socket.connect((host, port))  # connect to the server
    print("Client with IP and port : ", host, port)
    message = input("send message -> ")
    while message.lower().strip() != '/':
        client_socket.send(message.encode())
        data = client_socket.recv(1024).decode()
        print('Received from server : ', host, " : " + data)
        message = input("send message -> ")
        print("waiting for message.....")

    client_socket.close()


if __name__ == '__main__':
    client_program()
