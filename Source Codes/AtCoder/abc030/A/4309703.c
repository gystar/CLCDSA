#include<stdio.h>

int main(void){
  double a,b,c,d;
  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
  if(b/a>d/c) printf("TAKAHASHI\n");
  else if(b/a<d/c) printf("AOKI\n");
  else printf("DRAW\n");
  return 0;
} 