#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if((a <= b && b <= c) || (c <= b && b <= a)){
    printf("%d\n", b);
  }else if((b <= c && c <= a) || (a <= c && c <= b)){
    printf("%d\n", c);
  }else{
    printf("%d\n", a);
  }
  
  return 0;
} 