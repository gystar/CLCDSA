#include<stdio.h>

int main(){

   int a,i,max,min,b[100];

   scanf("%d",&a);
   for(i=0;i<a;i++){
      scanf("%d",&b[i]);
   }
   max=b[0];
   min=b[0];

   for(i=0;i<a;i++){
      if(max<b[i]) max=b[i];
      else if (min>b[i]) min=b[i];
   }
   printf("%d",max-min);
   return 0;
} 