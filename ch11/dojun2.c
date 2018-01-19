#include<stdio.h>

int main()
{

	int ch;

	ch = getchar();

	while(ch != '\n')
	{
		if(ch >= 'A' && ch <= 'Z')
			ch = ch +32;
		else if(ch >= 'a' && ch <= 'z')
			ch = ch -32;
		printf("%c",ch);
		ch = getchar();
	}

	printf("\n");

	return 0;
}




