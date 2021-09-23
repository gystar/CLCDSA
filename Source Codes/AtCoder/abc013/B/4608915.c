#include<stdio.h>

int main(void)
{
  int a;
  int b;

  scanf("%d",&a);
  scanf("%d",&b);

  if(a>b){
    printf("%d\n",(a-b)<(b+10-a)?a-b:b+10-a);
  }

   if(b>a){
     printf("%d\n",(b-a)<(a+10-b)?b-a:a+10-b);
   }
    return 0;
} 