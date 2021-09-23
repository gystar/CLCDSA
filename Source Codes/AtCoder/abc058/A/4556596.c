#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%s", b - a == c - b ? "YES" : "NO");
  return 0;
} 