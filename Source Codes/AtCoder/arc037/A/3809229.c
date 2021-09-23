#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int m[N];
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%d", &m[i]);
	}
	int sum = 0;
	for (i = 0; i < N; i++) {
		if (m[i] >= 80) {
			continue;
		} 
		if (m[i] < 80) {
			sum += (80 - m[i]);
		}
	}
	printf("%d\n", sum);
	return 0;
} 