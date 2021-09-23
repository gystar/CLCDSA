#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, i;
	scanf("%d%d", &N, &M);
	int *a = (int *)malloc(sizeof(int) * M);
	for(i = 0; i < M; i++){
		scanf("%d", &a[i]);
		a[i]--;
	}
	int *b = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		b[i] = 0;
	}
	for(i = M - 1; i >= 0; i--){
		if(b[a[i]] == 0){
			printf("%d\n", a[i] + 1);
			b[a[i]] = 1;
		}
	}
	for(i = 0; i < N; i++){
		if(b[i] == 0){
			printf("%d\n", i + 1);
		}
	}
	return 0;
} 