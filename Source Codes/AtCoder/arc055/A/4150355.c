#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;

  scanf("%d", &N);

  printf("1");
  for(i = 1; i <= N - 1; i++){
    printf("0");
  }
  printf("7\n");
  
  return 0;
} 