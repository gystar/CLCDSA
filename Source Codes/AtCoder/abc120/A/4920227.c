#include<stdio.h>
 
int main(void)
{
   int a,b,c,d;
 
   scanf("%d%d%d",&a,&b,&c);
 
   d = b/a;
 
   if(d<c){
      printf("%d\n",d);
   }
    else printf("%d\n",c);

   return 0;
} 