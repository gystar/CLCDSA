#include <stdio.h>

int main(void){
  int N,m,min = 1001;
  long X,ans = 0;
  scanf("%d%ld",&N,&X);

  for(int i = 0;i < N;i++){
    scanf("%d",&m);
    if(min > m) min = m;
    X -= m;
  }
  ans = N;
  ans += X/min;

  printf("%ld\n",ans);

  return 0;
} 