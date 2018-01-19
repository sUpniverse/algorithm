#include<stdio.h>

int main() {
 	int input,cnt;
	int rem,sum;


	scanf("%d",&input);
	sum = input;
	while(1) {
		if(input == sum && cnt > 0) break;

		rem = sum % 10;
		sum = (sum / 10) + rem;
		sum = (rem * 10) + (sum %10);
		cnt++;				

	}

	printf("%d",cnt);
	return 0;

}
