#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int L, H, N, i;

  scanf("%d%d%d", &L, &H, &N);

  int A[N], B[N];

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    if(A[i] < L){
      B[i] = L - A[i];
    }else if(A[i] > H){
      B[i] = -1;
    }else{
      B[i] = 0;
    }
  }

  for(i = 0; i < N; i++){
    printf("%d\n", B[i]);
  }
  
  return 0;
} 