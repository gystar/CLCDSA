#include<stdio.h>

int main(){
  int N, T[100], M, P, X, tot = 0, i, result[100];
  
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d",&T[i]);
    tot += T[i];
  }
  scanf("%d", &M);
  for (i = 0; i < M; i++){
    scanf("%d %d", &P, &X);
    result[i] = tot - T[P - 1] + X;
  }
  
  for (i = 0; i < M; i++){
    printf("%d\n", result[i]);
  }
  
  return 0;
} 