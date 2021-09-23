#include<stdio.h>

int main(void) {
	char S[11];
	int i, count = 0, ans = 0;
	scanf("%s", &S);
	for (i = 0; i < 11; ++i) {
		switch (S[i]) {
		case'A':
		case'G':
		case'C':
		case'T':
			++count;
			break;

		default:
			if (count > ans) {
				ans = count;
				count = 0;
			}
			else {
				ans = ans;
				count = 0;
			}
			break;
		}
	}
	printf("%d", ans);
	return 0;
} 