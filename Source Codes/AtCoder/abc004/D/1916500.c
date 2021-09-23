#include <stdio.h>
#include <stdlib.h>

#define INF 100000000
int R,G,B;
int sum;
int dp[2001][901];

int culRGB(v,n){
    if(n<R){
        return abs(v+100);
    }else if(n<R+G){
        return abs(v);
    }else{
        return abs(v-100);
    }
}

int DP(int v,int n){
    //printf("%d, %d\n",v,n);
    if(dp[v+1000][n]!=-1)return dp[v+1000][n];
    if(v>999)return INF;
    if(n==sum)return 0;
    int tmp1,tmp2;
    tmp1=DP(v+1,n+1)+ culRGB(v,n);
    tmp2=DP(v+1,n);
    dp[v+1000][n]=(tmp1 > tmp2 ? tmp2 : tmp1);
    return dp[v+1000][n];
}

int main()
{
    scanf("%d %d %d",&R,&G,&B);
    sum=R+G+B;
    memset(dp,-1,sizeof(dp));
    
    printf("%d\n",DP(-1000,0));
    return 0;
} 