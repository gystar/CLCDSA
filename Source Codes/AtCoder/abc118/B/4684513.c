#include <stdio.h>

int n, m;
int k;
int a;
int dat[35];

int main()
{
	int ans = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);

		for (int j = 0; j < k; j++) {
			scanf("%d", &a);
			dat[a]++;
		}
	}

	for (int i = 0; i <= m; i++) {
		if (dat[i] == n) {
			ans++;
		}
	}

	printf("%d\n", ans);

	return 0;
} 