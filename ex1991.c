#include<stdio.h>
#include<stdlib.h>

int main() {
	char *a;
	char input1,input2,input3;
	int num,cnt;
	int i;

	scanf("%d",&num);

	a = (char*)calloc(num,sizeof(char));
	a[0] = 'A';
	
	for(i = 0; i < num; i++) {
		scanf("%c%c%c",&input1,&input2,&input3);
		cnt = 0;
		while(a[cnt]!= input1)
			cnt++;
		a[(cnt*2)+1] = input2;
		a[(cnt*2)+2] = input3;
	}

	for(i = 0; i < num; i++)
		printf("%c",a[i]);
}


