#include<stdio.h>
#include<string.h>

int main()
{
	char str[300];
	char temp[30];

	printf("문장 입력 :");
	scanf("%s",str);

	while(1)
	{

		printf("검색할 문자열 입력");
		scanf("%s",temp);

		if(strcmp(temp,"end") == 0)
			break;
		else
			
