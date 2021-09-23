#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  long N, Q, i, j;

  scanf("%ld%ld", &N, &Q);

  long a[N];

  for(i = 0; i < N; i++){
    a[i] = 0;
  }

  long L[Q], R[Q], T[Q];

  for(i = 0; i < Q; i++){
    scanf("%ld%ld%ld", &L[i], &R[i], &T[i]);
    for(j = L[i] - 1; j < R[i]; j++){
      a[j] = T[i];
    }
  }

  for(i = 0; i < N; i++){
    printf("%ld\n", a[i]);
  }
  
  return 0;
} 