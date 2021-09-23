#include <stdio.h>
int main(void){
  int a,b,c,d;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  if(a<=b){printf("%d",(c*a));}
                 if(a>b){printf("%d",b*c+(a-b)*d);}
return 0;
} 