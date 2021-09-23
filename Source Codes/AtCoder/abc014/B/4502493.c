#include <stdio.h>

int main(void){
  int N,X;
  scanf("%d%d",&N,&X);
  
  int a[N];
  for(int i = 0;i < N;i++) scanf("%d",&a[i]);

  int ans = 0;
  for(int i = 0;i < N;i++){
    if((X >> i)&1) ans += a[i];
  }

  printf("%d\n",ans);

  return 0;
} 