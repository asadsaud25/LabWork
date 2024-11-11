#!/bin/bash
if [ "$1" == "one" ];
then
        echo -e "\e[1m$1\e[0m"
elif [ "$1" == "two" ];
then
        echo "$1" | rev
elif [ "$1" = "three" ];
then
        for i in {1..1000}; do
        echo -ne "\033[5m$1\033[0m\r"
        sleep 0.5
        echo -ne "\r     \r"
        sleep 0.5
        done
fi