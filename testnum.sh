#!/bin/bash
AGE=$1
if [[ $AGE -ge 20 ]] && [[ $AGE -lt 30 ]];
then
    echo "you are in your 20s"
else 
    echo "you are not in the age range: "
fi