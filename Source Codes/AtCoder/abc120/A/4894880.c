#include<stdio.h>

int main(void)
{
  int a=0,b=0,c=0,d=0;

 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 
 d=b/a;

 if(c < d) d=c;

 printf("%d",d);

return 0;
} 