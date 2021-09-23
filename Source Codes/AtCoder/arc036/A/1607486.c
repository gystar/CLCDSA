#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, K, i;
	scanf("%d%d", &N, &K);
	int *t = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &t[i]);
	}
	for(i = 2; i < N; i++){
		if(t[i - 2] + t[i - 1] + t[i] < K){
			printf("%d\n", i + 1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
} 