#include<stdio.h>
int cnt[100002];
int main() {
#define mod 1000000007;
	int N, A;
	int ans = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A);
		cnt[A]++;
	}
	for (int i = N - 1; i > 0; i -= 2)
	{
		if (cnt[i]!=2)
		{
			puts("0");
			return 0;
		}
		else
		{
			ans = ans * 2 % mod;
		}
	}
	printf("%d\n", ans);
	return 0;
} 