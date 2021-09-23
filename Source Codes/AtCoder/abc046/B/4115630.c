#include <stdio.h>

int main(void){
	int n, k;
	unsigned long res = 1;
	scanf("%d %d", &n, &k);
	res = k;
	for(int i = 1; i < n; i++)
		res *= k - 1;
	printf("%ld\n", res);
	return 0;
} 