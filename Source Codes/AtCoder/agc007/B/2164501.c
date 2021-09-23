#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i;
	scanf("%d", &N);
	int *p = (int *)malloc(sizeof(int) * N);
	int *q = (int *)malloc(sizeof(int) * N);
	int *a = (int *)malloc(sizeof(int) * N);
	int *b = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &p[i]);
		p[i]--;
		q[p[i]] = i;
	}
	a[0] = 1 + q[0];
	for(i = 1; i < N; i++){
		a[i] = 1 + a[i - 1] + q[i];
	}
	b[N - 1] = 1 + q[N - 1];
	for(i = N - 2; i >= 0; i--){
		b[i] = 1 + b[i + 1] + q[i];
	}
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i = 0; i < N; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
} 