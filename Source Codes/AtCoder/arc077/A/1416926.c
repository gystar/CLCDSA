#include <stdio.h>

int main(void) {

	int n, i;
	scanf("%d", &n);
	int a[212345];
	for (i = 0; i < n; i++) {
		fscanf(stdin, "%d", &a[i]);
	}

	for (i = n-1; i >= 0; i-=2) {
		printf("%d ", a[i]);
	}

	for (i=-(i+1); i<=n-1; i+=2) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;

} 