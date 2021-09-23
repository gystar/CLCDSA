#include<stdio.h>

int main() {
	int N;
	int ans[10000];
	scanf("%d", &N);
	int i = 0;
	if (N == 0) {
		printf("0\n");
		return 0;
	}
	while (N != 0) {
		if (N % 2 == 0) {
			ans[i] = 0;
		}
		else {
			ans[i] = 1;
			N--;
		}
		N /= -2;
		i++;
	}
	i--;
	for (; i >= 0; i--) {
		printf("%d", ans[i]);
	}
	printf("\n");
		return 0;
} 