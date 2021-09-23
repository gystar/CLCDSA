#include <stdio.h>
int main(void){
  int i,s[3],e[3],tokuten=0;
  for(i=0;i<3;i++){
    scanf("%d%d",&s[i],&e[i]);
    tokuten+=s[i]*e[i]/10;
  }
  printf("%d\n",tokuten);
  return 0;
} 