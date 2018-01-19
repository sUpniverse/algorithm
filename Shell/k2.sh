#! /bin/bash

plus()
{

	res=`expr $1 + $2`
		echo $1 + $2 = $res

}


minus()
{
	res=`expr $1 - $2`
		echo $1 - $2 = $res
}

multi()
{
	res=`expr $1 \* $2`
		echo $1 \* $2 = $res
}

div()
{
	res=`expr $1 / $2`
		echo $1 / $2 = $res
}

case $2 in
"+")
	plus $1 $3;;

"-")
	minus $1 $3;;
"*")
	multi $1 $3;;
"/")
	div $1 $3;;

esac

