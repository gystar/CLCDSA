#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (abs(a) > abs(b)) {
		printf("Bug\n");
	} else if (abs(a) < abs(b)) {
		printf("Ant\n");
	} else {
		printf("Draw\n");
	}
	return 0;
} 