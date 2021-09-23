#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int a[N], b[N];
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d%d", &a[i], &b[i]);
	}
	int sum = 0;
	for (i = 0; i < N; i++) {
		sum += a[i] * b[i];
	}
	sum = sum * 1.05;
	printf("%d\n", (int)sum);
	return 0;
} 