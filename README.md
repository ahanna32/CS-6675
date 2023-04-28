# P2P Decentralized System for Malware Signature Sharing
This project uses gtk-gnutella to provide a peer-to-peer decentralized file sharing system with added integrations for our project. In this modified version of Gnutella, we have a token system to reward users upon sharing files, a TrustMe factor that holds and retrieves the trust values of connected users using a SQL database, and have the default file extension to only be supported malware signature supported extensions (YARA).

## Added Files

In the main directory, we added a Python script, **server.py**, that externally creates a database for the TrustMe factor of each user. This script updates and gets the TrustMe scores of connected users and listens for connected IP addresses to the host VM. Within **CS-6675/src/core** we added the following files: **token_system.c** and **token_system.h**. These files are for the implementation of the token system as a way to incentivize users and combat the issue of free-riding. The functions provided in the C file are called every time the user uploads a file, found in **share.c**.

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
