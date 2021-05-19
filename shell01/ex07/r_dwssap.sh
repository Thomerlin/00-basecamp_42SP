#!/bin/sh

FT_LINE1=7
FT_LINE2=15

cat /etc/passwd |  sed 's/:.*//g' | awk 'NR % 2 == 0' | rev | sort -r | sed -n '${FT_LINE1},${FT_LINE2p}' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./g'