#! /bin/bash

sum=0
echo =============================
echo "구구단 "
echo -n "몇단을 출력할까요?"
read num

for i in `seq 1 9`
do
	let sum=num*i
	echo " $num * $i = $sum "

done

echo ===============================
