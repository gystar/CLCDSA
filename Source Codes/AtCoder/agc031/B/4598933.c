#include <stdio.h>
int main(void){
    int n,c[200000],i,p[200001]={},dp[200001],MO=1000000007;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&c[i]);
    dp[1]=1;
    p[c[0]]=1;
    for(i=2;i<=n;i++){
        int col = c[i-1];
        if(i-p[col]==1||p[col]==0){
            dp[i]=dp[i-1];
        }else{
            dp[i]=(dp[i-1]+dp[p[col]])%MO;
        }
        p[col]=i;
    }
    printf("%d",dp[n]);
} 