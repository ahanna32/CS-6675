#! /usr/bin/python3
import socket
import sqlite3

# sdthreshod for if a node is trusted or not
threshold = 5

def updatePeer(host, score):
    dbCon = sqlite3.connect("THAPeers.db")
    cur = dbCon.cursor()

    statement = "SELECT trustPeer FROM peers WHERE node ='{}'".format(host)
    rows = cur.execute(statement).fetchall()
    print(rows)
    dbCon.commit()
    cur.close()
    dbCon.close()

    thaPeer = rows[0][0]

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((thaPeer, port))
        s.sendall(b'update:' + bytes(host, 'utf-8') + b':' + bytes(score, 'utf-8'))



def queryPeer(host):

    dbCon = sqlite3.connect("THAPeers.db")
    cur = dbCon.cursor()

    statement = "SELECT trustPeer FROM peers WHERE node ='{}'".format(host)
    rows = cur.execute(statement).fetchall()
    print(rows)
    dbCon.commit()
    cur.close()
    dbCon.close()
    print(rows)
    thaPeer = rows[0][0]

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((thaPeer, port))
        s.sendall(b'query:' + bytes(host, 'utf-8'))
        data = s.recv(2048).decode('utf-8')
        if (int(data) < threshold):
            print("Not Trusted")
        else:
            print("Trusted")


if __name__ == '__main__':
    # This is the host IP that the user wants to know about. It should be an IP that the above THA Peer is responsible for.
    host = input("Host: ")
    port = 34493
    # Tell the program whether you want to query or update
    op = input("Operation: ")



    if op == 'update':
        score = input("rate your transaction (0-10)")
        if int(score) < 0 or int(score) > 10:
            print("Invalid Value")
            exit()
        else:
            updatePeer(host, score)
    elif op == 'query':
        queryPeer(host)

    else:
        print("Invalid Operation")
        exit()

