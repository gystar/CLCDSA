#include <stdio.h>

#define MIN(x,y) ((x)<(y)?(x):(y))

typedef long long int ll;

int a[2000];

int dp[2000];
ll dp2[2];

int main(){
  int n, x, i, j;
  scanf("%d%d", &n, &x);
  for(i=0;i<n;i++){
    scanf("%d", a+i);
    dp2[0] += dp[i] = a[i];
  }

  for(j=1;j<n;j++){
    int b = j&1;
    dp2[b] = (ll) j*x;
    for(i=0;i<n;i++){
      dp2[b] += dp[i] = MIN(dp[i], a[(i+n-j)%n]);
    }
    dp2[b] = MIN(dp2[b^1], dp2[b]);
  }

  printf("%lld\n", dp2[~n&1]);
  return 0;
} 