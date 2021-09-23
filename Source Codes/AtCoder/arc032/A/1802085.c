#include <stdio.h>

int main(){
	int N, i;
	scanf("%d", &N);
	if(N == 1){
		printf("BOWWOW\n");
		return 0;
	}
	N = ((N * 1) * N) / 2;
	for(i = 2; i * i <= N; i++){
		if(N % i == 0){
			printf("BOWWOW\n");
			return 0;
		}
	}
	printf("WANWAN\n");
	return 0;
} 