#include <stdio.h>
#include <stdlib.h>
    
   int main(void){
       char x,y;
       scanf("%c %c",&x,&y);
       if(x>y){
           printf(">");
       }if(x<y){
           printf("<");
       }if(x==y){
           printf("=");
       }
   } 