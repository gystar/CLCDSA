#include<stdio.h>

int main(){

   int a,b,i=1;
   b=111;
   scanf("%d",&a);
   while(1){
      if(a<=b*i){
         printf("%d",b*i);
         return 0;
      }
      i++;
   }
} 