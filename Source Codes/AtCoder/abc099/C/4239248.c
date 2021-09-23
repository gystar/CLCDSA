#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  int ans = N;
  
  for(int i = 0;i <= N;i++){
    int cc = 0;
    int t = i;
    while(t > 0) cc += t%6,t /= 6;
    t = N-i;
    while(t > 0) cc += t%9,t /= 9;
    if(ans > cc) ans = cc;
  }

  printf("%d\n",ans);

  return 0;
} 