#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a)<(b))?(a):(b))
int main() {
	long int n, k, a, i, kk;
	long long int ans = 0;
	scanf("%ld%ld", &n, &k);
	kk = min(k, n - k + 1);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a);
		ans += a*min(min(i + 1, n - i), kk);
	}
	printf("%lld", ans);
	return 0;
} 