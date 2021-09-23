#include<stdio.h>

int main() {
	char S[102];
	long long K, i;
	char ans = '1';
	scanf("%s", S);
	scanf("%lld", &K);
	for (i = 0; i < K; i++) {
		if (S[i] != '1') {
			ans = S[i];
			break;
		}
	}
	printf("%c\n", ans);

	return 0;
} 