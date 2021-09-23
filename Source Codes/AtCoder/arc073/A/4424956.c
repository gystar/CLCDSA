#include<stdio.h>
int main() {
	int N, TM;
	long long ans = 0;
	scanf("%d%d", &N, &TM);
	long long *T = (long long *)malloc(sizeof(long long)*N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &T[i]);
	}

	for (int i = 1; i < N; i++)
	{
		if (T[i]-T[i-1]<TM)
		{
			ans += T[i] - T[i - 1];
		}else
		{
			ans += TM;
		}
	}
	ans += TM;
	printf("%lld\n", ans);

	return 0;
} 