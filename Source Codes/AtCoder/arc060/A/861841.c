#include <stdio.h>
int N,A;
int x[51];
long long int dp[51][5050];
int main(){
  int i,j;
  int X;
  scanf("%d %d",&N,&A);X=A;
  for(i=1;i<=N;i++){
    scanf("%d",&x[i]);
    if(X<x[i])X=x[i];
    x[i]-=A;
  }
 
  dp[0][N*X]=1;
  for(i=1;i<=N;i++){
    for(j=0;j<=2*N*X;j++){
      dp[i][j]=dp[i-1][j]+dp[i-1][j-x[i]];
    }
    
  }

 
  
  printf("%lld\n",dp[N][N*X]-1);
  return 0;
} 