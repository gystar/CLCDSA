#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d",&N);

	if (N == 12){
		printf("%d\n",N-11);
	} else {
		printf("%d\n",N+1);
	}

	return 0;
} 