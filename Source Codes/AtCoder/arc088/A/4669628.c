#include <stdio.h>



int main() {
	long long x, y, c, count = 0;
	scanf("%lld %lld", &x, &y);
	
	c = x;

	while (c <= y) {
		count++;
		c = 2 * c;
	}
	
	printf("%lld\n", count);

	return 0;
} 