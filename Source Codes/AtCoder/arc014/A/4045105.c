#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N;

  scanf("%d", &N);

  if(N % 2 == 0){
    printf("Blue\n");
  }else{
    printf("Red\n");
  }
  
  return 0;
} 