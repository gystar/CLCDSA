#include <stdio.h>

int main()
{
	int A, B, C, K, S, T;
	scanf("%d%d%d%d%d%d", &A, &B, &C, &K, &S, &T);
	if (S + T < K) {
		printf("%d\n", A*S+B*T);
	} else {
		printf("%d\n", A*S+B*T-C*(S+T));
	}
	return 0;
} 