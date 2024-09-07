#! /bin/bash
cat /etc/passwd | awk !'/#/' | sed 's/:.*//g' | rev | sed -n 'n;p' | sort -r | sed -n "$FT_LINE1,${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
