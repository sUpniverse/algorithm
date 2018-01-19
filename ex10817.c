#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int i,j;
	int* a;
	int num,check;
	double sum = 0;
	int temp;

	scanf("%d",&num);	
	a = (int*)malloc(sizeof(int)*num);
		
 	for(i = 0; i < num; i++) {
		scanf("%d",a+i);
	}

	for(i = 0; i< num-1; i++) {
		for(j = i+1; j<num; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(j = 0; j < num; j++) {
		sum = sum +((double)a[j]/(double)a[num-1] * 100);	
	}
	printf("%.2lf",sum/num);	

	return 0;
}

		

