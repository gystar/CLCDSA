#include<stdio.h>
int main() {
	long long int a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	a *= b;
	a %= 1000000007;
	a *= c;
	a %= 1000000007;
	printf("%lld", a);
} 