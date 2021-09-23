#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	printf("%d\n", A*B*2 + A*C*2 + B*C*2);
	return 0;
} 