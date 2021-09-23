#include <stdio.h>


int main(){
  int I, O, T, J, L, S, Z, k;
  long long int ans=0;
  scanf("%d%d%d%d%d%d%d", &I, &O, &T, &J, &L, &S, &Z);
  k = (I&1)+(J&1)+(L&1);
  if(k>=2&&I>0&&J>0&&L>0){
    ans += 3;
    I -= 1;
    J -= 1;
    L -= 1;
  }
  ans += (long long int) O+(I&~1)+(J&~1)+(L&~1);
  printf("%lld\n", ans);
  return 0;
} 