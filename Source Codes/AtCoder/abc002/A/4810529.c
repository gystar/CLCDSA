#include <stdio.h>

int
main(){
  int x, y;
  scanf("%d %d",&x, &y);
  if(x < 0 || 1000000000 < y)
    return 1;
  printf("%d\n",x > y? x:y);
  return 0;
} 