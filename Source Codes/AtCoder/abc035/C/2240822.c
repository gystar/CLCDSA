#include <stdio.h>
int main() {
	int n, q, l, r;
	int a[200010] = {};
	scanf("%d%d", &n, &q);
	for (int i = 0; i < q; i++)
	{
		scanf("%d%d", &l, &r);
		a[--l]++; a[r]--;
	}
	printf("%d", a[0]%2);
	for (int i = 1; i < n; i++)
	{
		a[i] += a[i - 1];
		printf("%d", a[i]%2);
	}
	printf("\n");
	return 0;
} 