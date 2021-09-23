#include <stdio.h>
int main(void){
  int a,b,c,total=0;
  scanf("%d%d%d",&a,&b,&c);
  total+=(a*b)*2;
  total+=(b*c)*2;
  total+=(a*c)*2;
  printf("%d",total);
  return 0;
} 