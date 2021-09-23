#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	if (N == 100) {
		printf("Perfect\n");
	} else if (N <= 99 && N >= 90) {
		printf("Great\n");
	} else if (N <= 89 && N >= 60) {
		printf("Good\n");
	} else {
		printf("Bad\n");
	}
	return 0;
} 