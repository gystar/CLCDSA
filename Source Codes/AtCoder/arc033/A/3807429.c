#include <stdio.h>

int progression(int N)
{
	if (N == 1) {
		return 1;
	} else {
		return progression(N - 1) + N;
	}
}


int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", progression(N));
	return 0;
} 