#include "stdio.h"
 
int main()
{
	int x, n, k, i = 0, bi = 0, count = 0, ans = 0;
 
	scanf("%d %d", &n, &k);
	for (x = 0; x < n; x++) {
		scanf("%d", &i);
		if (bi < i) {
			count++;
			if (count >= k) {
				ans++;
			}
		}
		else {
			count = 1;
		}
		if (k == 1) {
			bi = 0;
		}
		else {
			bi = i;
		}
	}
	printf("%d\n", ans);
 
	return 0;
} 