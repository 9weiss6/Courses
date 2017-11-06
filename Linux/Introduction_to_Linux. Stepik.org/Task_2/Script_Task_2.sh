#!/bin/bash

counter ()
{
        local let "c1+=$1"
        let "c2+=${1}*2"
}

while [[ $a -lt 10 ]]
do
        let "a+=1"
        counter $a
        echo "counters are $c1 and $c2"
done
