#include <stdio.h>

int main()
{
	int N, K;
	scanf("%d%d", &N, &K);
	int t[N];
	int i, j, k;
	for (i = 0; i < N; i++) {
		scanf("%d", &t[i]);
	}
	int flag=0;
	for (i = 2; i < N; i++) {
		if (t[i]+t[i-1]+t[i-2] < K) {
			printf("%d\n", i+1);
			flag = 1;
			break;
		}
	}
	if (flag != 1) {
		printf("-1\n");
	}
	return 0;
} 