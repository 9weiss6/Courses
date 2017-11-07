#!/bin/bash

while true
do
	echo "enter your name:"
	read name 
	if [[ -z $name ]]||[[ $name == 0 ]]
	then
	    echo "bye"
	    exit
	 fi
  echo "enter your age:"
	read age
	if [[ -z $age ]]||[[ $age == 0 ]]
	then
		echo "bye"
		exit
	fi
	if [[ $age -le 16 ]]
	then
		echo "${name}, your group is child"
	continue
	elif [[ $age -le 25 ]]
	then
		echo "${name}, your group is youth"
	continue
	elif [[ $age -gt 25 ]]
	then
		echo "${name}, your group is adult"
	continue
	fi
done
