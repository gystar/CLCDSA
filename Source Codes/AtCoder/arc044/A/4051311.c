#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long N, i;
  long t = 0;

  scanf("%ld", &N);

  for(i = 2; i <= sqrt(N); i++){
    if(N % i == 0){
      t = 1;
      break;
    }
  }

  if(N == 1){
    printf("Not Prime\n");
  }else if(t == 0){
    printf("Prime\n");
  }else{
    if((N % 3 != 0) && (N % 2 != 0) && (N % 5 != 0)){
      printf("Prime\n");
    }else{
      printf("Not Prime\n");
    }
  }
  
  return 0;
} 