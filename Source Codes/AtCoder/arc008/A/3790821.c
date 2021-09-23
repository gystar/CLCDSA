#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	if (N % 10 == 0) {
		printf("%d\n", N*10);
	} else if (N % 10 > 0 && N % 10 < 7) {
		printf("%d\n", (N-N%10)*10 + 15*(N%10));
	} else if (N % 10 >= 7 && N % 10 <= 9) {
		printf("%d\n", ((N-N%10)+10)*10);
	}
	return 0;
} 