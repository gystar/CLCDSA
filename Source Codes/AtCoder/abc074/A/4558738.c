#include<stdio.h>

int main(){

	int N, A, B, C;

	scanf("%d", &N);
	scanf("%d", &A);

	B = N * N;
	C = B - A;

	printf("%d",C);

	return 0;
} 