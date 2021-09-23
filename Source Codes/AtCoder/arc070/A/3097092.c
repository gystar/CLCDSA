#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int x;
int main() {
	scanf("%d", &x);

	int n = 1;
	while((n + 1) * n / 2 < x) {
		n++;
	}
	printf("%d\n", n);
	return 0;
} 