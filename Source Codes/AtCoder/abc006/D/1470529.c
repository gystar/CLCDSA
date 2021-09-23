#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)scanf("%d",&a[i]);
    int dp[N];
    int ans=0;
    for(int i=0;i<N;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]&&dp[i]<dp[j]+1)dp[i]=dp[j]+1;
        }
        if(dp[i]>ans)ans=dp[i];
    }
    printf("%d\n",N-ans);
    return 0;
} 