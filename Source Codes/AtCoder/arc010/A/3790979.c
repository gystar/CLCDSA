#include <stdio.h>

int main()
{
	int N, M, A, B;
	scanf("%d%d%d%d", &N, &M, &A, &B);
	int c[M];
	int i, flag=0;
	for (i = 0; i < M; i++) {
		scanf("%d", &c[i]);
	}
	for (i = 0; i < M; i++) {
		if (N <= A) {
			N += B;
		} 
		N -= c[i];
		if (N < 0) {
			printf("%d\n", ++i);
			flag = 1;
			break;
		}
	}
	if (flag != 1) {
		printf("complete\n");
	}
	return 0;
} 