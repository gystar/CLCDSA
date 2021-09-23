#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (i*j == 2025 - N) {
				printf("%d x %d\n", i, j);
			}
		}
	}
	return 0;
} 