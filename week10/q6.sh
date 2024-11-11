#!/bin/bash
overtime_rate=12 max_hours=40 for ((i=1; i<=10; i++)) do
    echo "Enter hours worked by employee $i:"
    read hours_worked
    if [ $hours_worked -gt $max_hours ]; then
        overtime_hours=$((hours_worked - max_hours))
        overtime_pay=$((overtime_hours * overtime_rate))
        echo "Employee $i has worked $overtime_hours overtime hours. Overtime pay: Rs. $overtime_pay"
    else
        echo "Employee $i has not worked overtime."
    fi done