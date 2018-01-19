#include<stdio.h>

int cal(int order,int *coeff,int x);

int main()
{
	int i; // 루프 인덱스
	int order;
	int input[5]={0};
	int x;
	int result = 0;

	printf("차수 입력(2~4):");
	scanf("%d",&order);

	for(i = order; i >= 0 ; i --) {
		printf("%d차 계수 입력:",i);
		scanf("%d",&input[i]);
		
	}

	printf("x값 입력  :");
	scanf("%d",&x);
	
	result = cal(order,input,x); 

	for(i = order; i > 0; i--) 
		printf("%dx^%d+",input[i],i);
	printf("%d",input[0]);
	printf(",x = %d -> %d\n",x,result);

	return 0;
}


int cal(int order, int *coeff, int x)
{
	int total = 0;
	int sum;
	int i,j;
	
	for(i = order; i > 0 ; i--) {
		sum = 1;
		for(j = i; j > 0 ; j --){
			if(x == 0)
				sum = 1;
			else
				sum *=  x;
		}

		total += coeff[i]  * sum;
		sum = 0;
		
	}

	total += coeff[0];

	return total;

}
