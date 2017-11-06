#!/bin/bash

while [[ 1 -gt 0 ]]; do
        read a op b
        if [[ $a == "exit" ]]; then
               echo "bye"; break
       elif [[ -z $a || ( -z "$op" || "+-*/%**" != *$op* ) || -z $b ]]; then
                echo "error"; break;
        fi
        let "res = $a $op $b"
        echo $res
done
