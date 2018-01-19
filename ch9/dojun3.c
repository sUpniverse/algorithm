#include<stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main()
{
	int a=1,b=2,c=3;
	char input;

	while(1)
	{

		printf("%d %d %d",a,b,c);
		scanf("%c",&input);
		if(input !='\n')
			break;
		else
			rotate(&a,&b,&c);

	}


	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{

	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}


