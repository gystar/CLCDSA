#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, Q, l, r, i;
	scanf("%d%d", &N, &Q);
	int *piece = (int *)malloc(sizeof(int) * (N + 1));
	for(i = 0; i <= N; i++){
		piece[i] = 0;
	}
	for(i = 0; i < Q; i++){
		scanf("%d%d", &l, &r);
		piece[l - 1]++;
		piece[r]--;
	}
	for(i = 1; i <= N; i++){
		piece[i] += piece[i - 1];
	}
	for(i = 0; i < N; i++){
		printf("%d", piece[i] % 2);
	}
	printf("\n");
	return 0;
} 