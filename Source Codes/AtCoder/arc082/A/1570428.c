#include <stdio.h>
#define MAXN 100100
int solve(int* a, int n) {
	int ans = 0;
	static int cnt[MAXN];
	for(int i = 0; i < n; i++)
		cnt[a[i]]++;
	for(int i = 0; i < MAXN; i++) {
		int s = cnt[i] + cnt[i + 1] + cnt[i + 2];
		if(ans < s) ans = s;
	}
	return ans;
}
int main(void) {
	int n;
	static int a[MAXN];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("%d\n", solve(a, n));
	return 0;
} 