#!/usr/bin/env bash
var=70
first=hello
second=world
count=1
if [ $1 -gt 200 ]
then
	echo "$first $second!"
	pwd
elif [ $2 -eq 70 ]
then
	echo  "not $first $second is 70"
	ls -a
else
	echo 'else clause'

fi
echo "end of script"
until [ $count -gt 10 ]
do
	echo $count
	((count++))
done
echo 'All done'
