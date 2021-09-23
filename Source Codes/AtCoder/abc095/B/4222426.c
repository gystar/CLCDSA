#include<stdio.h>

int main(){
  int N, X, m, min = 100001, count;
  
  scanf("%d %d", &N, &X);
  for (int i = 0; i < N; i++){
    scanf("%d", &m);
    if(min > m){
      min = m;
    }
    X -= m;
  }
  
  count = N + X/min;
  printf("%d\n", count);
  
  return 0;
} 