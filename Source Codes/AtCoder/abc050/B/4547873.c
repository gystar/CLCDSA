#include <stdio.h>

int main(void){
  int N,T[100];
  int M,P[100],X[100];
  int i,j;
  int sum = 0;
  
  scanf("%d",&N);
  for(i = 0;i < N; ++i){
    scanf(" %d",&T[i]);
    sum += T[i];
  }
  scanf(" %d",&M);
  for(j = 0;j < M; ++j)	scanf(" %d %d",&P[j],&X[j]);
  
  for(i = 0;i < M; ++i)  printf("%d\n",sum - (T[P[i] - 1] - X[i]));
  return 0;
} 