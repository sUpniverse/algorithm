#include<stdio.h>

int main()
{

	int i,j;
	int a;

	scanf("%d",&a);

	for(i = 0; i < a; i++) {
		for(j = 0; j < a ; j++) {
			if( i == j || i+j+1 == a)
				printf("*");
			else
				printf(" ");	
		}

		printf("\n");
	}
	
	return 0;
}



