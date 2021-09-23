#include <stdio.h>
#define MAXN 60
int main(void) {
	int n, p, s = 0;
	scanf("%d%d", &n, &p);
	long long ans = 1LL << n;
	for(int i = 0; i < n; i++) {
		int v;
		scanf("%d", &v);
		s += v & 1;
	}
	printf("%lld\n", s ? ans >> 1 : p ? 0 : ans);
	return 0;
} 