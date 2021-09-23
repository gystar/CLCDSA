#include <stdio.h>

int main(void){
  int x, a, b, c;
  scanf("%d %d %d", &x, &a, &b);
  c = a - b;
  if(c >= 0){
    printf("delicious\n");
  }else{
    c = -c;
    if(x >= c) printf("safe\n");
    else printf("dangerous\n");
  }

  return 0;
} 