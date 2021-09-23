#include<stdio.h>

int main(){
  int N, M, a[50] = {0}, i, p, q;
  scanf("%d %d", &N, &M);
  for (i = 0; i < M; i++){
    scanf("%d %d", &p, &q);
    a[p - 1]++;
    a[q - 1]++;
  }
  for (i = 0; i < N; i++){
    printf("%d\n", a[i]);
  }
  
  return 0;
} 