#include <stdio.h>
int main(void){
  int a,b,cases=0;
  scanf("%d%d",&a,&b);
  while(1){
    cases++;
    if(a*cases>=b) break;
  }
  printf("%d",cases);
  return 0;
} 