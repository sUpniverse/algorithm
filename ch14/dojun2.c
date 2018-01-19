#include<stdio.h>
#include<string.h>

int main()
{
 	char str[10][20] = {0};
	char test[20] = {0};
	int cnt=0,i;

	while(1)
	{
		if(cnt == 10)
			break;
		printf("단어 입력(종료는 end입력) :");
		scanf("%s",test);
		if(strcmp(test,"end") == 0){
			printf("#총 %d개의단어가 입력되었습니다!\n\n",cnt);
			break;
		}else
			strcpy(str[cnt],test);

		cnt++;

	}
	
	while(1)
	{
		printf("검색 단어 (종료는 end 입력) :");
		scanf("%s",test);
		if(strcmp(test,"end") == 0)
			break;
		else
			for(i = 0; i < cnt; i++) {
				if(strcmp(str[i],test) == 0) {
					printf("# %d번째 같은 단어가 있습니다\n\n",i+1);
					break;
				}else if(i == cnt-1)
					printf("# 없는 단어입니다.\n\n");
			}
	}

	return 0;
}
