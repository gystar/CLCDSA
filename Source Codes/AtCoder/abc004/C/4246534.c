#include<stdio.h>

int main(){
  int x, i, a[6], xi;
  long N;
  
  scanf("%ld", &N);
  N = N % 30;
  for (i = 0; i < 6; i++){
    a[i] = i + 1;
  }
  
  for (i = 0; i < N; i++){
    xi = i%5;
    x = a[xi];
    a[xi] = a[xi + 1];
    a[xi + 1] = x;
  }
  
  for (i = 0; i < 6; i++){
    printf("%d", a[i]);
  }
  printf("\n");
  
  return 0;
} 