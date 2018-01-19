#include<stdio.h>

int main()
{

	int i = 0;
	char basket[100] = {0};
	int cnt = 0;
	
	printf("문장 입력:");
	gets(basket);


	while(basket[i] != 0)
	{
		if( basket[i] >= 'A'  && basket[i] <= 'Z' ) {
			basket[i] = basket[i]+32;
			cnt++;
		}
		i++;
	}


	puts(basket);
	printf(" 바뀐 문자수 : %d\n",cnt);

	return 0;
}




