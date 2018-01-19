#include<stdio.h>

int main()
{
	int a =0;
	int num,i,j,k;

	scanf("%d",&a);

	for(i = 1; i < a ; i++) {
		for(j = 1; j < a-i ; j++)
			printf(" ");
		//num = 1;
		for(k = 1; k < i*2 ; k++) {
			printf("*");
			num++;
		}
		printf("\n");
	
	}
	return 0;
}
