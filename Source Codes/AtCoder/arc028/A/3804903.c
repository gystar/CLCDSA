#include <stdio.h>

int main()
{
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	int i;
	for (i = 0; N > 0; i++) {
		if (i % 2 == 0) {
			N -= A;
		} else {
			N -= B;
		}
	}
	if (i % 2 == 1) {
		printf("Ant\n");
	} else {
		printf("Bug\n");
	}
	return 0;
} 