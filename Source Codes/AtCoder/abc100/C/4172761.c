#include <stdio.h>

int main(void){
  int N;
  int ans = 0;
  long long a;
  scanf("%d",&N);

  for(int i = 0;i < N;i++){
    scanf("%lld",&a);
    while(a%2 == 0){
      a /= 2;
      ans++;
    }
  }

  printf("%d\n",ans);
  return 0;
} 