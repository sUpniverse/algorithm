#include<stdio.h>

int main() {

	char a[100];
	int i;
	int cnt = 1;

	gets(a);
	for(i = 0; i < 100; i++) {
		if(a[i] == '\0')
			break;
		else if(i == cnt*10) {
			cnt++;
			printf("\n");
			printf("%c",a[i]);
		}else
			printf("%c",a[i]);

	}

	return 0;



}
