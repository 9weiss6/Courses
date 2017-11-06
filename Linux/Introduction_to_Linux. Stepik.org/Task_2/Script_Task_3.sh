#!/bin/bash

gcd ()
{
while [[ M -ne N ]]
do
if [[ M -lt N ]]; then let N-=M
else let M-=N; fi
done
}

while [[ true ]]; do
       read M N
if [[ -z $M ]] || [[ -z $N ]]; then break; fi
gcd
echo "GCD is $M"
done
echo "bye"
