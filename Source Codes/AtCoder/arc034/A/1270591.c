#include<stdio.h>
int main() {
	int N, a, b, c, d, e, i;
	double score=-1;
	scanf("%d", &N);
	for (i = 1;i <= N;i++) {
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		if (a + b + c + d + e * 110 / 900.0 > score) {
			score = a + b + c + d + e * 110 / 900.0;
		}
	}
	printf("%lf\n", score);
	return 0;
} 