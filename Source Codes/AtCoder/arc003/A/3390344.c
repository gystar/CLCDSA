#include <stdio.h>

int main(void)
{
	char r[101];
	int N, sum = 0, i;
	scanf("%d%s", &N, r);
	for (i = 0; i < N; ++i) {
		if (r[i] == 'F') continue;
		sum += 'E' - r[i];
	}
	printf("%.9f\n", (double)sum / N);
	return 0;
} 