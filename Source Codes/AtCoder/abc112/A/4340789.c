#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n_old = 0;
	int a, b;
	scanf("%d", &n_old);
	if (n_old == 1) {
		printf("Hello World\n");
	} else {
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d", a+b);
	}
	return 0;
} 