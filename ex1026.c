#include<stdio.h>
#include<stdlib.h>

int main() {
	int N;
	int *A, *B;
	int i, j;
	int *temp,*amp;
	int tmp;
	int rank;
	int sum = 0;

	scanf("%d", &N);

	A = (int*)calloc(N, sizeof(int));
	B = (int*)calloc(N, sizeof(int));
	temp = (int*)calloc(N, sizeof(int));
	amp = (int*)calloc(N, sizeof(int));

	for(i = 0; i < N; i++)
		scanf("%d", A + i);
	for(i = 0; i < N; i++)
		scanf("%d", B + i);
	for(i = 0; i < N; i++)
		temp[i] = A[i];
	for(i = 0; i < N; i++)
		amp[i] = B[i];

	for (i = 0; i < N; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (temp[j] > temp[j + 1]) {
				tmp = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = tmp;
			}
		}
	}   
	for (i = 0; i < N; i++) {
		rank = 0;
		for (j = 0; j < N; j++) {
			if (B[i] <= B[j]) {
				rank++;
				if(B[i] == B[j] && i > j)
					rank--;
			}
		}      
		A[i] = temp[rank - 1];
		sum += B[i] * temp[rank - 1];
		temp[rank-1] = 101;
	}
	printf("%d", sum);

	return 0;
}
