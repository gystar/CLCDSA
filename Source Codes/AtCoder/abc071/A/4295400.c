#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, a, b;
	scanf("%d%d%d", &x, &a, &b);

	if (abs(x - a) > abs(b - x)) {
		printf("B\n");
	} else {
		printf("A\n");
	}
	return 0;
} 