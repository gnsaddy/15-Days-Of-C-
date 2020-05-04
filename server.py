import socket


def server_program():
    # get the hostname
    host = socket.gethostname()
    port = 5000

    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((host, port))
    print("Server is trying to connect client")
    server_socket.listen(2)
    conn, address = server_socket.accept()
    print("Connection from: " + str(address))
    while True:
        data = conn.recv(1024).decode()
        with open("chat.txt", "a+") as fp:
            fp.write("Client message : " + data + "\n")
        if not data:
            # if data is not received break
            break
        print("from user: ", address, " -> " + str(data))
        data = input('send message -> ')
        conn.send(data.encode())  # send data to the client
        print("waiting for message.....")

        with open("chat.txt", "a+") as fp:
            fp.write("Server message : " + data + "\n")

    conn.close()  # close the connection


if __name__ == '__main__':
    server_program()
