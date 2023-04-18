import socket

#threshod for if a node is trusted or not
threshold = 5



if __name__ == '__main__':
    #THA Peers are assigned statically for now. This basically assumes that each node statically knows which THA peer is responsible for the node it wants to query.
    #This is why this IP is hardcoded now, but it will eventually have to be assigned automatically.
    thaPeer = '192.168.6.3'
    #This is the host IP that the user wants to know about. It should be an IP that the above THA Peer is responsible for.
    host = input("Host: ")
    port = 34493
    #Tell the program whether you want to query or update
    op = input("Operation: ")

    if op != 'update' and op != 'query':
        print("Invalid Operation")
        exit()

    elif op == 'update':
        val = input("rate your transaction (0-10)")
        if int(val) < 0 or int(val) > 10:
            print("Invalid Value")
            exit()
            
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.connect((thaPeer, port))
            s.sendall(b'update:' + bytes(host, 'utf-8') + b':' + bytes(val, 'utf-8'))
    elif op == 'query':
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.connect((thaPeer, port))
            s.sendall(b'query:' + bytes(host, 'utf-8'))
            data = s.recv(2048).decode('utf-8')
            if (int(data) < threshold):
                print("Not Trusted")
            else:
                print("Trusted")
