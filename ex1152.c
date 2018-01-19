#include<stdio.h>
#include<string.h>

int main()
{	
	char str[1000001] = {0};
	int i = 0;
	int cnt = 0;
	int size;

	gets(str);

	size = strlen(str);
	
	for(i = 0 ; i < size; i++ ) 
		if(str[i] == 32)
			cnt++;

	if(str[0] == 32)
		cnt--;
	if(str[size-1] == 32)
		cnt--;

	printf("%d",cnt+1);

	return 0;

}
