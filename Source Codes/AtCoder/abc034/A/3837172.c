#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x < y) {
		printf("Better\n");
	} else if (x > y) {
		printf("Worse\n");
	} 
	return 0;
} 