#include <stdio.h>
#include <stdlib.h>
int min(int x, int y){return x<y?x:y;}
int main(void){
	int n,i;
	scanf("%d",&n);
	int a[n],dp[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	dp[0]=0;dp[1]=abs(a[1]-a[0]);
	for(i=2;i<n;i++){
		dp[i] = min(dp[i-2]+abs(a[i]-a[i-2]),
				dp[i-1]+abs(a[i]-a[i-1]));
	}
	
	
	printf("%d",dp[n-1]);
	return 0;
} 