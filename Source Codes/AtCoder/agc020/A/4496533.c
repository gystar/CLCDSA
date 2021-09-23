#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, a, b;
	int dist;

	scanf("%d %d %d", &n, &a, &b);

	dist = abs(a - b);
	if (dist & 1) {
		puts("Borys");
	} else {
		puts("Alice");
	}

	return 0;
} 