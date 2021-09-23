#include <stdio.h>

int main()
{
	int N, L;
	scanf("%d%d", &N, &L);
	char S[N+1];
	scanf("%s", S);
	int count=1,crash=0;
	int i, j;
	for (i = 0; i < N; i++) {
		if (S[i] == '+') {
			count++;
		} else if (S[i] == '-') {
			count--;
		}
		if (count > L) {
			crash++;
			count = 1;
		}
	}
	printf("%d\n", crash);
	return 0;
} 