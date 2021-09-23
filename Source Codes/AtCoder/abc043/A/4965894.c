#include <stdio.h>

int main(void)
{
	int n;
	int cnt;
	unsigned int candy;

	scanf("%d", &n);

	for (candy = 0, cnt = 1; cnt <= n; cnt++) {
		candy += cnt;
	}

	printf("%d\n", candy);

	return 0;
} 