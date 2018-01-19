#include<stdio.h>

int main()
{
	char ch;
	int top = 0;
	int cnt;

	while(1) 
	{
		ch = getchar();
		cnt = 0;
		while((ch != -1) &&(ch != '\n') )  {
			
			cnt++;
			ch = getchar();
		}

		if(cnt > top)
			top = cnt;

		if(ch == -1)
			break;
	}

	printf("가장 긴 단어의 길이 : %d\n",top);


	return 0;
}
