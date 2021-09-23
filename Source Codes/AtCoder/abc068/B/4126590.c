#include<stdio.h>

int main(void){
   int n,a=0;
   scanf("%d",&n);
   for(int i=0;i<10;i++){
      if((1<<i) <= n)a=(1<<i);
   }
   printf("%d",a);
   return 0;
} 