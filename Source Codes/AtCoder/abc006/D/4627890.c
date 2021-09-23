#include <stdio.h>
#define INF 1 << 29

int main(void){
  int N;
  scanf("%d",&N);

  int c[N];
  for(int i = 0;i < N;i++) scanf("%d",&c[i]);
  int dp[N+1];
  for(int i = 0;i < N+1;i++) dp[i] = N+1;

  for(int i = 0;i < N;i++){
    int low = -1,high = N;
    int mid;
    while(high-low > 1){
      mid = (high+low)/2;
      if(c[i] < dp[mid]) high = mid;
      else low = mid;
    }
    dp[high] = c[i];
  }

  for(int i = 0;i < N+1;i++){
    if(dp[i] == N+1){
      printf("%d\n",N-i);
      break;
    }
  }

  return 0;
} 