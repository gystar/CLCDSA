#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int v;
  char a[10],b[5];
  scanf("%s%s",a,b);
  strcat(a,b);
  v=atoi(a);
  if((floor(sqrt((double)v)))*(floor(sqrt((double)v)))==v) printf("Yes\n");
  else printf("No\n");
  return 0;
} 