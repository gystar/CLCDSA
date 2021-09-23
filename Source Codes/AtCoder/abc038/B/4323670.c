#include <stdio.h>
int main(void){
int a,b,c,d;
  scanf("%d %d",&a,&b);
  scanf("%d %d",&c,&d);
  if(a==c||a==d||b==c||b==d){printf("YES");}
  else{printf("NO");}
  return 0;
} 