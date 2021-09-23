#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	if (A < B) {
		printf("%d\n", C / A);
	} else {
		printf("%d\n", C / B);
	}
	return 0;
} 