#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int A, B;

  scanf("%d%d", &A, &B);

  if(B < 10){
    printf("%d\n", (A * 10 + B) * 2);
  }else if(B < 100){
    printf("%d\n", (A * 100 + B) * 2);
  }else{
    printf("%d\n", (A * 1000 + B) * 2);
  }
   
  return 0;
} 