#include<stdio.h>
#include<stdlib.h>

#define min(a,b) ((a)<(b)?(a):(b))

int main(){
	int n,i,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	long long dp[100001];
	dp[0]=0;
	dp[1]=abs(a[1]-a[0]);
	for(i=2;i<n;i++){
		dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
	}
	printf("%lld\n",dp[n-1]);
	return 0;
} 