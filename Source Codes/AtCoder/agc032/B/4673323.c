#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, i, j;
	scanf("%d", &N);
	M = (N * (N - 1)) / 2;
	M -= N / 2;
	printf("%d\n", M);
	for(i = 1; i <= N; i++){
		for(j = i + 1; j <= N; j++){
			if(i + j != 2 * (N / 2) + 1){
				printf("%d %d\n", i, j);
			}
		}
	}
	return 0;
} 