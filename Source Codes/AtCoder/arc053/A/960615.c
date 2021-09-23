#include <stdio.h>

int main(void)
{
	int h, w, n, m;

	scanf("%d %d", &h, &w);

	n = (w - 1) * h;
	m = (h - 1) * w;

	printf("%d\n", n + m);

	return (0);
} 