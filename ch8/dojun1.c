#include<stdio.h>

int main()
{
	int i,j,k;
	int temp,target = 0;
	int point[5] = {0};
	
	printf("5명의 심사위원의 점수 입력:");
	for(i = 0; i < 5 ; i++)
		scanf("%d",&point[i]);

	for(j = 0; j < 5 ; j++) {
		for(k = j+1; k < 5 ; k++) {
			if(point[j] > point[k]) {
				temp = point[j];
				point[j] = point[k];
				point[k] = temp;
			}
		}
	}

	printf("유효 점수 :");
	for(i = 1; i < 4; i++) {
		printf("%d ",point[i]);
		target += point[i];
	}
	printf("평균 %.1lf \n",target/3.0);

	return 0;
}




