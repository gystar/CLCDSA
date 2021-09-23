#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int x, y;

  scanf("%d %d", &x, &y);

  if(y > x){
    printf("Better\n");
  }else{
    printf("Worse\n");
  }
  
  return 0;
} 