#include<stdio.h>

int main()
{

	int list[5][6] = { 1,2,3,4,5,0,
			   6,7,8,9,10,0,
			   11,12,13,14,15,0,
			   16,17,18,19,20,0};

	int i,j,w_sum = 0;

	for(i = 0; i < 5; i++) {
		w_sum = 0;
		for(j = 0; j < 6; j++)  {
			w_sum += list[i][j];
			if(i == 4) 
				list[i][j] = list[0][j]+list[1][j]
					+list[2][j]+list[3][j];
		}
		if(i < 4)
			list[i][j-1] = w_sum;
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j<6; j++) 
			printf("%4d",list[i][j]);
		printf("\n");
	}


	return 0;
}


	



