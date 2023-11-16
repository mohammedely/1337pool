#!/bin/sh
ifconfig -a | grep -w 'ether' | cut -d ' ' -f 2
