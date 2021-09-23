#include <stdio.h>

int main(void){
	unsigned long n;
	scanf("%ld", &n);
	printf("%ld\n", n - (1 - 2 * (n % 2)));
	return 0;
} 