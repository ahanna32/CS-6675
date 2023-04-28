#! /usr/bin/python3
import sqlite3

#init database for THAPeer Server
serverCon = sqlite3.connect("trustScores.db")
serverCur = serverCon.cursor()
serverCur.execute("CREATE TABLE scores(node TEXT, score INTEGER)")
serverCon.commit()
serverCur.close()
serverCon.close()

#init databae for Client
clientCon = sqlite3.connect("THAPeers.db")
clientCur = clientCon.cursor()
clientCur.execute("CREATE TABLE peers(trustPeer TEXT, node TEXT)")
clientCon.commit()
clientCur.close()
clientCon.close()

exit()
