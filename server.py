#! /usr/bin/python3
import socket
import sqlite3

def updateScore(node, val):
    dbCon = sqlite3.connect("trustScores.db")
    cur = dbCon.cursor()

    res = cur.execute("SELECT * FROM scores WHERE node='" + node + "'")
    if res.fetchone() is None:
        statement = "INSERT INTO scores VALUES('{}', {})".format(node, val)
        cur.execute(statement)
        rows = cur.execute("SELECT * FROM scores").fetchall()
        print(rows)
        dbCon.commit()
        cur.close()
        dbCon.close()
        return
    else:
        statement = "UPDATE scores SET score = " + val + " WHERE node = '" + node +"'"
        cur.execute(statement)
        rows = cur.execute("SELECT * FROM scores").fetchall()
        print(rows)
        dbCon.commit()
        cur.close()
        dbCon.close()


def queryScore(node, netCon):
    dbCon = sqlite3.connect("trustScores.db")
    cur = dbCon.cursor()

    statement = "SELECT score FROM scores WHERE node = '" + node + "'"
    rows = cur.execute(statement).fetchall()
    print(rows)
    dbCon.commit()
    cur.close()
    dbCon.close()

    print(rows[0][0])
    data = str(rows[0][0])

    netCon.sendall(bytes(data, 'utf-8'))


if __name__ == '__main__':

    # the database needs to be created manually once before the server can function normally. I've included some commands in here for convenience that can be used
    # just to initialize the database, add a test value, and check that its working. Dont run these commands every time the server runs, I usually just run them in the
    # python shell
    #dbCon = sqlite3.connect("trustScores.db")
    #cur = dbCon.cursor()
    #cur.execute("CREATE TABLE scores(node TEXT, score INTEGER)")
    #cur.execute("INSERT INTO scores VALUES ('192.168.6.4', 10)")
    #rows = cur.execute("SELECT * FROM scores").fetchall()
    #print(rows)
    #dbCon.commit()
    #cur.close()
    #dbCon.close()

    # HOST is the IP of the vm running the server, i.e. the THA Peer
    HOST = '192.168.6.3'
    PORT = 34493
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((HOST, PORT))
    while True:
        s.listen()
        netCon, addr = s.accept()
        with netCon:
            print("Connection From: " + addr[0])
            data = netCon.recv(2048).decode('utf-8').split(':')
            op = data[0]
            if op == 'update':
                node = data[1]
                val = data[2]
                updateScore(node, val)
            elif op == 'query':
                node = data[1]
                queryScore(node, netCon)
