#include<stdio.h>

int main(){

	int  N, A, B, plan1, plan2;

	scanf("%d", &N);
	scanf("%d", &A);
	scanf("%d", &B);

	plan1 = A * N;
	plan2 = B;

	if (plan1 <= plan2) {
		printf("%d", plan1);
	}
	else {
		printf("%d", plan2);
	}
	

	return 0;
} 