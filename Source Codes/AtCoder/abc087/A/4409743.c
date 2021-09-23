#include <stdio.h>

int main(){
  int x,a,b;
  scanf("%d\n%d\n%d",&x,&a,&b,stdin);
  x -= a;
  x -= (x/b)*b;
  printf("%d\n",x);
  return 0;
} 