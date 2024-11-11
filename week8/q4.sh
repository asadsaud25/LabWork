#! /bin/bash

read -p "Enter Basic Salary: " s
if [ $s -lt 1500 ]
then
        hra=`echo 0.1 \* $s | bc`
        da=`echo 0.9 \* $s | bc`
else
        hra=500
        da=`echo 0.98 \* $s | bc`
fi
gross=`echo $hra + $da + $s | bc`
echo "Gross Salary = $gross"
exit 0