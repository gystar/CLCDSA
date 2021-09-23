#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	if (N % 2)
		printf("%d", N*2);
	else
		printf("%d", N);
	
	return 0;
} 