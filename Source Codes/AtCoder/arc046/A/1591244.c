#include <stdio.h>

int main(){
	int N, i;
	scanf("%d", &N);
	for(i = 0; i < (N - 1) / 9 + 1; i++){
		printf("%d", (N - 1) % 9 + 1);
	}
	printf("\n");
	return 0;
} 