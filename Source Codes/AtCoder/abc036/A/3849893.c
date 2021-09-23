#include <stdio.h>

int main()
{
	int A, B, x;
	scanf("%d%d", &A, &B);
	if ( B % A == 0) {
		x = B / A;
	} else {
		x = B / A + 1;
	}
	printf("%d\n", x);
	return 0;
} 