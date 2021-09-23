#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  char N[4];

  scanf("%s", N);

  if((N[0] == N[1]) && (N[1] == N[2]) && (N[2] == N[3])){
    printf("SAME\n");
  }else{
    printf("DIFFERENT\n");
  }
  
  return 0;
} 