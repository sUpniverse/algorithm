#include<stdio.h>

int main() {
	int i,n=0,M,D,S=0;
	char day[7][4] = {{"MON"}, {"TUE"}, {"WED"},{ "THU"}, {"FRI"}, {"SAT"},{"SUN"}};
	scanf("%d%d",&M,&D);
	for(i= 1; i < M ; i++) {
		if((i ==4)||(i==6)||(i==9)||(i==11)) {
			n += 30; 
		} else if (i == 2) {
			n += 28; 
		} else {
			n += 31; 
		}
	}
	n += (D-1);
	printf("%d",n);
	S = (n % 7);
	printf("%s",day[S]);

	return 0;

}
