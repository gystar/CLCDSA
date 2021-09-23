#include<stdio.h>
int main() {
	char S[100002];
	scanf("%s", S);
	int len = strlen(S);
	int cnt = 0, ans = 0;
	for (int i = 0; i < len; i++)
	{
		if (S[i] == 'p') {
			cnt++;
		}
	}
	ans = len / 2 - cnt;
	printf("%d\n", ans);
	return 0;
} 