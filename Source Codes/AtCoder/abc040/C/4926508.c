#include <stdio.h>
#include <stdlib.h>
int MIN(int a,int b){return a<b?a:b;}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int dp[100002]={0};
    dp[0]=0;
    dp[1]=abs(a[0]-a[1]);
    for(int i=2;i<=n;i++){
        dp[i]=MIN(dp[i-2]+abs(a[i]-a[i-2]),dp[i-1]+abs(a[i]-a[i-1]));
    }
    printf("%d",dp[n-1]);
    return 0;
} 