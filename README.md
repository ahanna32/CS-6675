# P2P Decentralized System for Malware Signature Sharing
This project uses gtk-gnutella to provide a peer-to-peer decentralized file sharing system with added integrations for our project. In this modified version of Gnutella, we have a token system to reward users upon sharing files, a TrustMe factor that holds and retrieves the trust values of connected users using a SQL database, and have the default file extension to only be supported malware signature supported extensions (YARA).

## Added Files

In the main directory, we added a Python script, **server.py**, that externally creates a database for the TrustMe factor of each user. This script updates and gets the TrustMe scores of connected users and listens for connected IP addresses to the host VM. Within **CS-6675/src/core** we added the following files: **token_system.c** and **token_system.h**. These files are for the implementation of the token system as a way to incentivize users and combat the issue of free-riding. The functions provided in the C file are called every time the user uploads a file, found in **share.c**.

## Preparing TrustMe Databases 

Make sure the HOST variable in the main function of server.py matches the IP address of the node it is running on

Run initDB.py. This will create the databases for the server and clientside programs. The clientside database will need to be manually populated with THAPeers (taking the place of what would be the bootstrap server/broadcast updates in normal operation)

To add THAPeers to client-side database:

    1. python3
    2. import sqlite3
    3. dbCon = sqlite3.connect("THAPeers.db")
    4. cur = dbCon.cursor()
    5. cur.execute("INSERT INTO peers VALUES ('<IP OF THA PEER>','<IP THAT PEER IS RESPONSIBLE FOR>')")
    6. *Repeat step 5 for every THA Peer that the client needs to know*
    7. dbCon.commit()
    8. cur.close()
    9. dbCon.close()

OPTIONAL: to check if you have configured your THAPeers correctly for your client:

    10. rows = cur.execute("SELECT * FROM peers").fetchall()
    11. print(rows)

*You should see each tuple containing the THA Peer and the node it is responsible for in that order*
    

## Running/Building GTK-Gnutella

To build Gnutella,

    sudo make clean
    sudo make install
To run Gnutella,

    ./gtk-gnutella
If you would like to activate the **TrustMe** implementation, run

    python server.py
before opening Gnutella.

## Disabling Firewalls
When testing with multiple VMs to share files with each other, we noticed that we were unable to see each other's uploaded files even while on the same network. This is due to an internal firewall provided by Gnutella that blocks the connection of nodes on the same network. If you are unable to see any files on your host being uploaded by another VM, you can disable the firewall on both VMs by directing to **~/.gtk-gnutella/config_gnet** and setting all instances of **is_firewalled** to **FALSE**.
