#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, A, B;

  scanf("%d%d%d", &N, &A, &B);

  if(N % (A + B) <= A && N % (A + B) > 0){
    printf("Ant\n");
  }else{
    printf("Bug\n");
  }
  
  return 0;
} 