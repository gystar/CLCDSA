#include <stdio.h>
#include <stdlib.h>
#define MAXN 100100
int cmp(const int* a, const int* b) {
	return *a - *b;
}
int main(void) {
	static int a[MAXN];
	static int cnt[MAXN];
	static long long map[MAXN];
	int i, n, pos = 0;
	int x = -1, y = -1;
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmp);
	for(map[pos] = a[pos], cnt[pos] = i = 1; i < n; i++) {
		if(a[i] == a[i - 1]) cnt[pos]++;
		else {
			pos++;
			map[pos] = a[i];
			cnt[pos] = 1;
		}
	}
	for(int i = n - 1; i >= 0; i--) {
		if(cnt[i] >= 4 && x == -1 && y == -1) {
			x = y = i;
			break;
		}
		if(cnt[i] >= 2 && x != -1) {
			y = i;
			break;
		}
		if(cnt[i] >= 2 && x == -1) {
			x = i;
		}
	}
	if(x == -1 && y == -1) puts("0");
	else printf("%lld\n", map[x] * map[y]);
	return 0;	
} 