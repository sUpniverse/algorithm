#include<stdio.h>

int main()
{

	int i,j,input;
	int lotto[6];

	for(i = 0; i < 6; i++) {
		printf("로또번호 입력:");
		scanf("%d",&input);
		j = 0;
		while(1) {
			if(input == lotto[j]) {
				printf("같은 번호가 있습니다\n");
				printf("로또번호 입력:");
				scanf("%d",&input);
			}else if(j == i) {
				lotto[i] = input;
				break;
			}else
				j++;
		}

	}

	printf("입력된 로또 번호 : ");
	for(i = 0; i <6; i++)
		printf(" %d ",lotto[i]);
	printf("\n");

	return 0;
}



				
				
		
