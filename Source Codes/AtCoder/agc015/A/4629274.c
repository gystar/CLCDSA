#include<stdio.h>

int main() {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	if (a > b || n == 1 && a != b) {
		printf("0");
	}
	else if (n == 1 && a == b)
		printf("1");
	else {
		printf("%lld",(long long) (b - a)*(n - 2) + 1);
	}
	return 0;
} 