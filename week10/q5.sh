#!/bin/bash
t=$(date +"%H") 
if [ $t -lt 12 ]; 
then
        echo "Good Morning" 
elif [ $t -lt 18 ]; 
then
        echo "Good Afternoon"
else
        echo "Good Evening" 
fi