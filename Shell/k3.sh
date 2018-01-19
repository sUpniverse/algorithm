#! /bin/bash
	
case $1 in
"+")
	plus $2 $3
	echo " + 입니다. ";;

"-")
	minus $2 $3
	echo " - 입니다. ";;
"*")
	multiple $2 $3
	echo " * 입니다.";;
"/")
	div $2 $3
	echo " / 입니다.";;

esac

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

multiple()
{
	res=`expr $1 * $2`
	echo $1 - $2 = $res
}

div()
{
	res=`expr $1 / $2`
	echo $1 - $2 = $res
}
