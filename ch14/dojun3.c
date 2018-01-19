#include<stdio.h>

int main()
{
	char name_branch[4][10] = {"관악점","강남점","명동점","대림점"};
	int branch[4][7] = {70, 45, 100, 92, 150, 81, 0,
			    88, 92, 77 , 30,  52, 55, 0,
		            50, 90, 88, 75 , 77, 49, 0,
			    120, 92, 80, 150, 130, 105, 0};

	int i,j;
	char *np[4];
	int *bp[4];
	char *ntemp;
	int *btemp;
	int sum = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 7; j++) 
			sum += branch[i][j];
		branch[i][6] = (int) sum / 6.0;
		sum = 0;

	}

	for(i = 0; i < 4; i++)
		bp[i] = branch[i];
	for(i = 0; i < 4; i++)
		np[i] = name_branch[i];


	for(i = 0; i < 3; i++) {
		for(j = i+1; j < 4; j++) {
			if(bp[i][6] < bp[j][6]) {
				btemp = bp[i];
				bp[i] = bp[j];
				bp[j] = btemp;

				ntemp = np[i];
				np[i] = np[j];
				np[j] = ntemp;
			}
		}
	}

	printf("실적별 출력...\n");
	for( i = 0; i <4; i++) {
		printf("%5s",np[i]);
		for( j = 0; j<7; j++)
			printf("%5d",bp[i][j]);
		printf("\n");
	}

	printf("\n\n");
	printf("지점별 출력...\n");
	for( i = 0; i <4; i++) {
		printf("%5s",name_branch[i]);
		for( j = 0; j<7; j++)
			printf("%5d",branch[i][j]);
		printf("\n");
	}



	return 0;
}







