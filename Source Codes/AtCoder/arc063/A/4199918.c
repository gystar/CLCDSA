#include<stdio.h>
int main() {
	char S[100002];
	scanf("%s", S);
	int ans = 0;
	for (int i = 1; i < strlen(S); i++)
	{
		if (S[i] != S[i - 1]) {
			ans++;
		}
	}
	ans = ans;
	printf("%d\n", ans);
	return 0;
} 