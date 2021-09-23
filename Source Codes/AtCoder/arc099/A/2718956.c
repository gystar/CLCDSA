#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, K, i;
	scanf("%d%d", &N, &K);
	int *A = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	printf("%d\n", ((N - 1) + (K - 1) - 1) / (K - 1));
	return 0;
} 