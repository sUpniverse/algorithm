#include<stdio.h>

void func(int *p,int *q);

int main()
{

	int mod, rem;
	func(&mod, &rem);
	printf("몫 : %d, 나머지 %d\n",mod,rem);
	
	return 0;
}

void func(int *p, int *q)
{
	
	int a;
	printf("양수 입력 :");
	scanf("%d",&a);

	
 	*p = a /4;
 	*q = a % 4;

}
