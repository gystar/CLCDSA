#include <stdio.h>
#include <stdlib.h>
int compare(const void *x, const void *y)
{
	return *(int*)y - *(int*)x;
}
int main(void)
{
	int N, i;
	long a[300000], ans = 0;
	scanf("%d", &N);
	for (i = 0; i < N * 3; ++i) scanf("%ld", &a[i]);
	qsort(a, N * 3, sizeof(long), compare);
	for (i = 1; i < N * 2; i += 2) ans += a[i];
	printf("%ld", ans);
	return 0;
} 