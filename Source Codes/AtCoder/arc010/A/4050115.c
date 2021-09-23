#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, M, A, B, i;

  scanf("%d%d%d%d", &N, &M, &A, &B);

  int c[M];

  for(i = 0; i < M; i++){
    scanf("%d", &c[i]);
  }

  for(i = 0; i < M; i++){
    if(N <= A){
      N += B;
    }
    if(N < c[i]){
      printf("%d\n", i + 1);
      N -= c[i];
      break;
    }
    N -= c[i];
  }

  if(N >= 0){
    printf("complete\n");
  }
  
  return 0;
} 