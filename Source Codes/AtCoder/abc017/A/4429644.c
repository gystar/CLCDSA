#include <stdio.h>

int main(void){
  int ans = 0;
  int s,e;
  for(int i = 0;i < 3;i++){
    scanf("%d%d",&s,&e);
    ans += s*e/10;
  }

  printf("%d\n",ans);
  return 0;
} 