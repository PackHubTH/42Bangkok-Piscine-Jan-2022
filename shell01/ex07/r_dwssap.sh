cat /etc/passwd | grep "^[^#]" | awk ' BEGIN { FS=":"}; NR%2==0 {print $1;}' | rev | sort -r | awk -v first=$FT_LINE1 -v last=$FT_LINE2 ' BEGIN {ORS=", "}; NR>=first && NR<=last {print ;}' | sed 's/, $/./' | tr -d '\n'