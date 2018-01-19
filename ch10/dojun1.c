#include<stdio.h>

void print_graph(int *ps, int size);

int main()
{
	int score[5] = {72,88,95,64,100};
	

	print_graph(score, 5);

	return 0;

}

void print_graph(int *ps, int size)
{

	int i,j,mod;

	for(i = 0; i < size; i++) {
		mod  = ps[i]  / size;
		printf("( %d)",ps[i]);
		for(j = 0 ; j <  mod; j ++)
			printf("*");
		printf("\n");
	}

}



