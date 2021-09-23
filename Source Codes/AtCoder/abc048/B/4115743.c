#include <stdio.h>

int main(void){
	unsigned long a, b, x;
	scanf("%ld %ld %ld", &a, &b, &x);
	printf("%ld\n", b / x - a / x + (a % x ? 0 : 1));
	return 0;
} 