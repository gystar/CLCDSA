#include <stdio.h>

int main(void){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);

  int flag[B];
  int ans = 0;
  for(int i = 0;i < B;i++) flag[i] = 0;

  for(int i = 1;;i++){
    if((A*i)%B == C){
      ans = 1;
      break;
    }
    if(flag[(A*i)%B]) break;
    flag[(A*i)%B] = 1;
  }

  if(ans) printf("YES\n");
  else printf("NO\n");
  
  return 0;
} 