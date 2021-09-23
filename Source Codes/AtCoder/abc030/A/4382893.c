#include <stdio.h>

int main(void){
  double a,b,c,d;
  scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

  if(b/a < d/c) printf("AOKI\n");
  else if(b/a == d/c) printf("DRAW\n");
  else printf("TAKAHASHI\n");

  return 0;
} 