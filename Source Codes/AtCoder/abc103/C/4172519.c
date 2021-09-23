#include <stdio.h>

int main(void){
  int N;
  long a;
  long long ans = 0;

  scanf("%d",&N);
  for(int i = 0;i < N;i++){
    scanf("%ld",&a);
    ans += a;
  }

  printf("%lld\n",ans-N);
  return 0;
} 