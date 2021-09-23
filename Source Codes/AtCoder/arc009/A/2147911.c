#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, a, b, i, sum = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d%d", &a, &b);
		sum += a * b;
	}
	printf("%d\n", (sum * 105) / 100);
	return 0;
} 