#! /bin/bash
ifconfig -v | awk '/ether / {print $2}'  
