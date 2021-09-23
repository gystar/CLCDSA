#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	char S[N][N+1];
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%s", &S[i]);
	}
	int red=0, blue=0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (S[i][j] == 'B') {
				blue += 1;
			} else if (S[i][j] == 'R') {
				red += 1;
			}
		}
	}
	if (red > blue) {
		printf("TAKAHASHI\n");
	} else if (red < blue) {
		printf("AOKI\n");
	} else {
		printf("DRAW\n");
	}
	return 0;
} 