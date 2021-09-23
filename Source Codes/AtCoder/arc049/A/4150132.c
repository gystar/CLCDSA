#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char S[128];
  int i, len;

  scanf("%s", S);

  len = strlen(S);

  int A, B, C, D;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  for(i = 0; i < A; i++){
    printf("%c", S[i]);
  }
  printf("%c", '"');
  for(i = A; i < B; i++){
    printf("%c", S[i]);
  }
  printf("%c", '"');
  for(i = B; i < C; i++){
    printf("%c", S[i]);
  }
  printf("%c", '"');
  for(i = C; i < D; i++){
    printf("%c", S[i]);
  }
  printf("%c", '"');
  for(i = D; i < len; i++){
    printf("%c", S[i]);
  }
  printf("\n");
  
  return 0;
} 