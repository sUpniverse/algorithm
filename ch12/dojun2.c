#include<stdio.h>
#include<string.h>

int main()
{

	char str[300] = {0};
	char temp[30] = {0};

	while(1)
	{
		printf("단어 입력 :");
		scanf("%s",temp);

		if(strcmp(temp,"end") == 0)
			break;
		else
			strcat(str,temp);
		
		strcat(str," ");
		printf("현재까지의 문자열 : %s\n",str);
	}

	return 0;
}
