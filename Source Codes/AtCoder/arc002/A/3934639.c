#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int Y;

  scanf("%d", &Y);

  if(Y % 400 == 0){
    printf("YES\n");
  }else if(Y % 100 == 0){
    printf("NO\n");
  }else if(Y % 4 == 0){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
   
  return 0;
} 