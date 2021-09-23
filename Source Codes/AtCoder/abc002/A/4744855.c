#include <stdio.h>
int main(){
  long x,y;
  scanf("%ld%ld",&x,&y);
  (x>y) ? printf("%ld\n",x) : printf("%ld\n",y);
  return 0;
} 