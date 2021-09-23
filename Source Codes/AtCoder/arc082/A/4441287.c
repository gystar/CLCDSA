#include<stdio.h>
int f[100002];
int main() {
	int N;
	int max = -1;
	int crt = 0;
	int ans = 0;
	scanf("%d", &N);
	int A;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A);
		f[A]++;
	}

	for (int i = 0; i <= 100010; i++)
	{
		crt = f[i] + f[i + 1] + f[i + 2];
		if (ans < crt)
		{
			ans = crt;
		}
	}
	printf("%d\n", ans);

	return 0;
} 