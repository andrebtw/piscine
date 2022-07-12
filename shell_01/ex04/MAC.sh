#!/bin/sh

ifconfig | grep "ether " | sed "s/ether //g" | sed "s/ //g" | sed "s/	//g"
