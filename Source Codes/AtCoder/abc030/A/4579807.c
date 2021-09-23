#include <stdio.h>
int main(void){
int a,b,c,d;
  double taka;
  double aoki;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  taka=(double)b/a;
  aoki=(double)d/c;
  if(taka>aoki){printf("TAKAHASHI\n");}
  else if(taka<aoki){printf("AOKI\n");}
  else if(taka==aoki){printf("DRAW\n");}
return 0;
} 