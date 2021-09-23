#include<stdio.h>

int main(){
  long N, Q, L, R, T, a[100] = {0}, i, j;
  
  scanf("%ld %ld", &N, &Q);
  for (i = 0; i < Q; i++){
    scanf("%ld %ld %ld", &L, &R, &T);
    for(j = L - 1; j < R; j++){
      a[j] = T;
    }
  }
  
  for (i = 0; i < N; i++){
    printf("%ld\n", a[i]);
  }
  
  return 0;
} 