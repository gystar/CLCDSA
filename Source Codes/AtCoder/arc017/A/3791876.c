#include <stdio.h>

int main()
{
	int N, i;
	scanf("%d", &N);
	int flag = 0;
	for (i = N - 1; i > 1; i--) {
		if (N % i == 0) {
			flag = 1;
		}
		if (flag == 1) {
			printf("NO\n");
			break;
		}
	}
	if (flag != 1) {
		printf("YES\n");
	}
	return 0;
} 