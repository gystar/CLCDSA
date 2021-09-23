#include <stdio.h>

long long max(long long a,long long b){
  if(a > b){
    return a;
  }
  return b;
}

long long min(long long a,long long b){
  if(a < b){
    return a;
  }
  return b;
}

long long gcd(long long a,long long b){
  if(b == 0) return a;
  else gcd(b,a%b);
}

int main(void){
  int N;
  scanf("%d",&N);
  long long T[N];
  long long ans = 1;

  for(int i = 0;i < N;i++){
    scanf("%lld",&T[i]);
  }

  for(int i = 0;i < N;i++){
    ans = ans/gcd(max(ans,T[i]),min(ans,T[i]))*T[i];
  }
  
  printf("%lld",ans);

  return 0;
} 