#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int N;
  scanf("%d",&N);

  int a[N];
  for(int i = 0;i < N;i++) scanf("%d",&a[i]);
  
  int dp[N];
  dp[0] = 0;
  dp[1] = abs(a[1]-a[0]);
  for(int i = 2;i < N;i++){
    dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
  }

  printf("%d\n",dp[N-1]);
  return 0;
} 