#include <stdio.h>

#define PE(a, b) {(a) += (b); if((a) >= mod) (a) -= mod;}

const int mod = 1000000007;
long long int dp[62][3];

int main(){
  int i, j;
  long long int n;
  scanf("%lld", &n);

  dp[0][0] = 1;
  for(i = 0; i < 61; n >>= 1, i++){
    for(j = 0; j <= 2; j++){
      int x = n & 0x1;
      int y = j - x + 1;

      PE(dp[i+1][j > x], dp[i][j]);
      PE(dp[i+1][y-(y>>1)], dp[i][j]);
      PE(dp[i+1][1+(y>>1)], dp[i][j]);
    }
  }
  printf("%lld\n", dp[61][0]);
} 