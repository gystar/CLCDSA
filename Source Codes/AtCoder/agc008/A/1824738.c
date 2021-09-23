#include <stdio.h>
#include <stdlib.h>
int main() {
  long long x,y,c=0;
  scanf("%lld %lld",&x,&y);
  if (x*y<0||(x==0&&y<0)||(y==0&&x>0)) {
    c=1;
  } else if ((llabs(y)-llabs(x))*x<0) {
    c=2;
  }
  printf("%lld\n",c+llabs(llabs(y)-llabs(x)));
  return 0;
} 