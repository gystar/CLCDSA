#include <stdio.h>

int main(void) {
	int r, g, b, number;
	scanf("%d %d %d", &r, &g, &b);
	number = 100 * r + 10 * g + b;
	if (number % 4 == 0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
} 