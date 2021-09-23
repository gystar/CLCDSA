#include<stdio.h>

int main() {
	int n,i,j;
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("%d\n", (n - 2)*n / 2);
		for (i = 1; i < n; i++) {
			for (j = i + 1; j <= n; j++) {
				if (i + j != n+1) { printf("%d %d\n", i, j); }
			}
		}
	}
	else {
		printf("%d\n", (n - 1)*(n - 1)/2);
		for (i = 1; i < n-1; i++) {
			for (j = i + 1; j < n; j++) {
				if (i + j != n) { printf("%d %d\n", i, j); }
			}
		}
		for (i = 1; i < n; i++) {
			printf("%d %d\n", n, i);
		}
	}
	return 0;
} 