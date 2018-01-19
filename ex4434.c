#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Test_CASE;
	int Student_Num;
	int i,j,k;
	double *rate;
	int sum = 0,cnt = 0;
	double average,n;
	char buffer[1000] = { 0 };

	scanf("%d", &Test_CASE);
	rate = (double*)malloc(sizeof(double)*Test_CASE);   

	for (i = 0; i < Test_CASE; i++) {
		scanf("%d",&Student_Num);
		int array[Student_Num];
		for(j = 0; j <Student_Num; j++) {
			scanf("%d",&array[j]);
			sum += array[j]; 
		}
		average =  sum / Student_Num;

		for (k = 0; k < Student_Num; k ++ ) {
			if (array[k] > average)
				cnt++;
		}
		rate[i] = cnt /(double)Student_Num * 100;
		sum = 0;
		cnt = 0;
	}

	for (i = 0; i < Test_CASE; i++) {
		printf("%.3lf", rate[i]);
		printf("%\n");
	}

	return 0;

}
