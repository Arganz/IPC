#!/bin/bash

wget -O ./ipcmd.zip https://github.com/nathanweeks/ipcmd/archive/master.zip
unzip ipcmd -d .
cd ipcmd-master
make
make check
cd bin
cp ipcmd /bin
