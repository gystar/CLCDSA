#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d%d", &N, &M);
	int x;
	if ((M+1)>N) {
		printf("%d", M-1);
	} else {
		printf("%d", M+1);
	}
	return 0;
} 