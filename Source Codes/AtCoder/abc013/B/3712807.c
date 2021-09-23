#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int max(int a,int b) {
  if(a>b) return a;
  return b;
}

int min(int a,int b) {
  if(a>b) return b;
  return a;
}

int main(void) {
  int a,b;
  scanf("%d%d",&a,&b);
  if(abs(a-b)>5) printf("%d\n",10-max(a,b)+min(a,b));
  else printf("%d\n",abs(a-b));
  return 0;
} 