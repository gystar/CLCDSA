#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int N,K;
  int ans = 0;
  scanf("%d%d",&N,&K);

  int x[N];
  for(int i = 0;i < N;i++) scanf("%d",&x[i]);

  for(int i = 0;i < N;i++){
    ans += min(x[i]*2,abs(K-x[i])*2);
  }

  printf("%d",ans);
  return 0;
} 