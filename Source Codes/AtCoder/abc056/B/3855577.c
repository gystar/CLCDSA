#include <stdio.h>

int main()
{
	int W, a, b;
	scanf("%d%d%d", &W, &a, &b);
	int i, j;
	int min;
	if (b > a+W) {
		printf("%d\n", b-a-W);
	} else if (a > b+W) {
		printf("%d\n", a-b-W);
	} else {
		printf("0\n");
	}
	return 0;
} 