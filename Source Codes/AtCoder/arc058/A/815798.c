#include <stdio.h>

int main(void)
{
	int i, num, rest, N, K, D[10] = {0};

	scanf("%d%d", &N, &K);
	for (i = 0; i < K; i++) {
		scanf("%d", &num);
		D[num] = 1;
	}

	for (i = N;; i++)	{
		num = i;
		while (num > 0) {
			rest = num % 10;
			if (D[rest] == 1) break;
			num /= 10;
		}
		if (num == 0) {
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
} 