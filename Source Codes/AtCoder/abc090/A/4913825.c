#include <stdio.h>
int main(void){
   int i;
   char C[3][3];
   for(i=0;i<3;i++){
       scanf("%s",C[i]);
       }
       for(i=0;i<3;i++)
        printf("%c",C[i][i]);
       return(0);
   } 