#include<stdio.h>
#include<stdlib.h>
#define int long long
int f(int n)
{
	if(n == 0)
	return 0;
	return f(n / 10) + n % 10;
}
int max(int x,int y)
{
	if(x>y)
	return x;
	return y;
}
int main(){
	int N, i, k;
	scanf("%lld", &N);
	int *ans = (int *)malloc(sizeof(int) * 200);
	for(i = max(1, N - 180), k = 0; i <= N; i++){
	if(i + f(i) == N)
	{ans[k] = i;
	k++;}}
	printf("%lld\n", k);
	for(i = 0; i < k; i++)
	printf("%lld\n", ans[i]);
	return 0;
} 