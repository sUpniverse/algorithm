#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;	
	char* b;
	int i;
	int* num;
	int cnt;
	scanf("%d",&a);
	b = malloc(sizeof(char) * a);
	scanf("%s",b);

	for(i = 0; i <a; i++){
		num[i] = b[i]-48;
		cnt += num[i];
	}


	printf("%d",cnt);

	free(b);

	return 0;



}
