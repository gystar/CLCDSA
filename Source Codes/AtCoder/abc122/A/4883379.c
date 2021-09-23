#include <stdio.h>
#include <string.h>

int main(void){
   
   char b;
   
   scanf("%c",&b);
   
   if(b == 'A'){
      printf("T\n");
   }
   else if(b == 'T'){
      printf("A\n");
   }
   else if(b == 'C'){
      printf("G\n");
   }
   else {
      printf("C\n");
   }
   
   return 0;
} 