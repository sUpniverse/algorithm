#include<stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main()
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums)
{
	int i,j;
	int input;

	for(i = 0; i < 6; i++) {
		printf("번호 입력:");
		scanf("%d",&input);
		j = 0;	
		while(1) {
			if(input == lotto_nums[j]) {
				printf("같은 번호가 있습니다\n");
				printf("번호 입력:");
				scanf("%d",&input);
			}else if(j == i) {
				lotto_nums[i] = input;
				break;
			}else
				j++;
		}

	} 
}

void print_nums(int *lotto_nums)
{

	int i;

	printf("로또 번호 : ");
	for(i = 0; i <6; i++)
		printf(" %d ",lotto_nums[i]);
	printf("\n");

}
