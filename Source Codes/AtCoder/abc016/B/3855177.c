#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	if (C == A+B && C == A-B) {
		printf("?\n");
	} else if (C == A+B && C != A-B) {
		printf("+\n");
	} else if (C == A-B && C != A+B) {
		printf("-\n");
	} else {
		printf("!\n");
	}
	return 0;
} 