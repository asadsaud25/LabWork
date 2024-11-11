#! /bin/bash

read -p "Enter Selling Price: " sp
read -p "Enter Cost Price: " cp
if [ $sp -gt $cp ]; then
 profit=`echo $sp - $cp | bc`
 echo "profit = $profit"
elif [ $sp -eq $cp ]; then
 echo "No profit No loss"
else
 loss=`echo $cp - $sp | bc`
 echo "Loss = $loss"
fi