#include<stdio.h>

int gets_print(char *str, int size);

int main()
{
	int ch,res;
	char str[10];

	res = gets_print(str,sizeof(str));

	printf("%d",res+10);

	return 0;
}

int gets_print(char *str, int size)
{
	char ch;
	int i = 0;
	int sum=0;
	int mul = 1;
	
	ch = getchar();
	while((ch != '\n') && (i <size -1))
	{
		str[i] = ch;
		i++;
		ch = getchar();

	}
	str[i] = '\0';

	while(i>0)
	{
		
		sum += ((str[--i] - '0') * mul);
		mul *= 10;
	}

	return sum;


}



	

