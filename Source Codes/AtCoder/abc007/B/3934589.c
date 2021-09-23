#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char A[16];
  int len;

  scanf("%s", A);

  len = strlen(A);

  if(len == 1 && A[0] == 'a'){
    printf("-1\n");
  }else{
    printf("a\n");
  }
   
  return 0;
} 