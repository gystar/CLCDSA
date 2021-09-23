#include <stdio.h>
     
    int main(void) {
      int A,B,i,C[100];
      scanf("%d",&A);
      for(i=0;i<A;i++){
          scanf("%d",&C[i]);
      }
      B=C[0];
      for(i=1;i<A;i++){
          if(B>C[i]){
              B=C[i];
          }
      }
      printf("%d\n",B);
      return 0;
    } 