#include <stdio.h>

int examin_money(int N, int SUM) {
	for (int i = 0; i <= N; i++) {
		if (10000 * i > SUM) {
			break;
		}
		for (int j = 0; j <= N - i; j++) {
			if (10000 * i + 5000 * j > SUM) {
				break;
			}
			int total = 10000 * i + 5000 * j + 1000 * (N - i - j);
			if (total == SUM) {
				printf("%d %d %d\n", i, j, N - i - j);
				return 0;
			}
		}
	}
	printf("%d %d %d\n", -1, -1, -1);
	return 0;
}

int main(void) {
	int n, sum;
	scanf("%d %d", &n, &sum);
	examin_money(n, sum);
	return 0;
} 