#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, A, B, i;
	scanf("%d%d%d%d", &N, &M, &A, &B);
	int *c = (int *)malloc(sizeof(int) * M);
	for(i = 0; i < M; i++){
		scanf("%d", &c[i]);
	}
	for(i = 0; i < M; i++){
		if(N <= A){
			N += B;
		}
		if(N < c[i]){
			printf("%d\n", i + 1);
			return 0;
		}
		else{
			N -= c[i];
		}
	}
	printf("complete\n");
	return 0;
} 