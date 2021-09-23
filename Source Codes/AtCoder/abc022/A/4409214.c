#include <stdio.h>

int main(void){
  int N,S,T,W;
  scanf("%d%d%d%d",&N,&S,&T,&W);

  int ans = 0;
  int a;
  if(S <= W && W <= T) ans++;
  for(int i = 0;i < N-1;i++){
    scanf("%d",&a);
    W += a;
    if(S <= W && W <= T) ans++;
  }

  printf("%d\n",ans);

  return 0;
} 