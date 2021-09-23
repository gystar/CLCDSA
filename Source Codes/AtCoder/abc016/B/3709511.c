#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a+b==c && a-b==c) puts("?");
  else if(a+b==c) puts("+");
  else if(a-b==c) puts("-");
  else puts("!");
  return 0;
} 