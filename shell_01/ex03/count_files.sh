#!/bin/sh

find . -type f -o -type d | wc -l | rev | cut -d" " -f1 | rev 
