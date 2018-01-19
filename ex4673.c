#include<stdio.h>

int function(int n);

int main() {
	int map[10000];
	int i,j;
	int cnt;

	for(i = 1; i < 10000; i++) {
		map[i] = function(i);
	}

	for(i = 1 ; i < 10000; i++) {
		cnt  = 0;
		for(j = 0; j < 10000; j++) 
			if(i == map[j]) cnt++;
		
		if(cnt == 0)
			printf("%d\n",i);
	}

	return 0;


}

int function(int n) {
	int result;
	
	if(n > 999) {
		result = n + (n / 1000) + ((n % 1000)/ 100) + (((n % 1000) % 100) / 10) + (((n % 1000) % 100) % 10);
	} else if( (n < 1000) && ( n > 99) ) {
		result = n + (n / 100) + ((n % 100) / 10) + ((n % 100) % 10);
	} else if ( (n < 100) ) {
			result = n + (n / 10) + (n % 10);
	}


	return result;	
}

