#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long N, M, i;

  scanf("%ld%ld", &N, &M);

  long a[M];
  long b[N + 1];

  for(i = 0; i < M; i++){
    scanf("%ld", &a[i]);
  }

  for(i = 1; i <= N; i++){
    b[i] = 0;
  }

  for(i = M - 1; i >= 0; i--){
    if(b[a[i]] == 0){
      printf("%ld\n", a[i]);
      b[a[i]] = 1;
    }
  }
  for(i = 1; i <= N; i++){
    if(b[i] == 0){
      printf("%ld\n", i);
    }
  }
  
  return 0;
} 