#include<stdio.h>

int main(void){
  double a,b;
  scanf("%lf",&a);
  scanf("%lf",&b);
  if(a>b) printf("GREATER\n");
  else if(a<b) printf("LESS\n");
  else printf("EQUAL\n");
  return 0;
} 