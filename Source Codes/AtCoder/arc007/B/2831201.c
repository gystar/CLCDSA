#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, i, j, disk, tmp;
	scanf("%d%d", &N, &M);
	int *CDcase = (int *)malloc(sizeof(int) * (N + 1));
	for(i = 0; i <= N; i++){
		CDcase[i] = i;
	}
	for(i = 0; i < M; i++){
		scanf("%d", &disk);
		for(j = 0; disk != CDcase[j]; j++){}
		tmp = CDcase[0];
		CDcase[0] = CDcase[j];
		CDcase[j] = tmp;
	}
	for(i = 1; i <= N; i++){
		printf("%d\n", CDcase[i]);
	}
	return 0;
} 