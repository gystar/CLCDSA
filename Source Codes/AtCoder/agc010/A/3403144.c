#include <stdio.h>

int main(void)
{
	int N, A, sum = 0, i;
	scanf("%d", &N);
	for (i = 0; i < N; ++i) {
		scanf("%d", &A);
		if (A % 2) ++sum;
	}
	if (sum % 2) puts("NO");
	else puts("YES");
	return 0;
} 