#include <stdio.h>

int main() {
	long long int x, y, z;
	scanf("%lld%lld%lld", &x, &y, &z);
	printf("%lld", (x - z) / (y + z));
} 