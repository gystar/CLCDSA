#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
 
int main(void){

  long a, b;

  scanf("%ld %ld", &a, &b);

  if(a > 0){
    printf("Positive\n");
  }else if(a * b <= 0){
    printf("Zero\n");
  }else{
    if((b - a + 1) % 2 == 0){
      printf("Positive\n");
    }else{
      printf("Negative\n");
    }
  }
    
  return 0;
} 