#include <stdio.h>

int main()
{
	int a, b, n;
	scanf("%d%d%d", &a, &b, &n);
	int i;
	for (i = n; ; ) {
		if (n % a == 0 && n % b == 0) {
			break;
		}
		n = n+1;
	}
	printf("%d\n", n);
	return 0;
} 