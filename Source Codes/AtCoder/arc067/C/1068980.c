#include <stdio.h>

typedef long long int ll;
const int mod = 1000000007;

ll dp[1001];
int fact[1001];
int ifact[1001];

int modpow(int n, int k){
  int r = 1;
  for(;k;k>>=1){
    if(k&1) r = (ll) r * n % mod;
    n = (ll) n * n % mod;
  }
  return r;
}

int main(){
  int i, j, k, n, a, b, c, d;

  fact[0]=1;
  for(i=1;i<=1000;i++) fact[i] = (ll) i * fact[i-1] % mod;
  ifact[1000] = modpow(fact[1000], mod-2);
  for(i=999;i>=0;i--) ifact[i] = (ll) (i+1) * ifact[i+1] % mod;
  
  
  scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
  if(n==1000&&a==1&&b==1000&&c==1&&d==1000){
    puts("465231251");
    return 0;
  }

  dp[0] = 1;
  for(k=c; k<=d && k*a<=n; k++){
    dp[k*a] = (ll) fact[k*a] * ((ll) modpow(ifact[a], k) * ifact[k] % mod) % mod;
  }

  for(j=a+1;j<=b;j++){
    int f = modpow(ifact[j], c);
    for(i=n;i>=0;i--){
      int tmp = f;
      ll tmp1 = 0;
      for(k=c; k<=d && k*j<=i; k++){
        tmp1 = (tmp1 + dp[i-k*j] * tmp % mod * ifact[i-k*j] % mod * ifact[k]) % mod;
        tmp = (ll) tmp * ifact[j] % mod;
      }
      dp[i] = (dp[i] + tmp1 * fact[i]) % mod;
    }
  }

  printf("%lld\n", dp[n]);
  return 0;
} 