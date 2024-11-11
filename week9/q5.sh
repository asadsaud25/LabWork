#!/bin/bash
read -p "Enter Year: " y
if [ $((y % 4)) -eq 0 ] && [ $((y % 100)) -ne 0 ] || [ $((y % 400)) -eq 0 ]; then
    echo "$y is a leap year." 
else
    echo "$y is not a leap year." 
fi 
exit 0