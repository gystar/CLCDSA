#include<stdio.h>

int main(void)
{
   char x;

   scanf("%c",&x);
   if(x=='A'){
        printf("T\n");
   }
   else if(x=='T'){
        printf("A");
   }
   else if(x=='C'){
        printf("G");
   }
   else if(x=='G'){
        printf("C");
   }
   return 0;
} 