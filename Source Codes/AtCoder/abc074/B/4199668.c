#include<stdio.h>

int main(){
  int N, K, x, i, d;
  
  scanf("%d", &N);
  scanf("%d", &K);
  
  for (i = 0; i < N; i++){
    scanf("%d", &x);
    if(x <= K/2){
      d += x;
    } else {
      d += K - x;
    }
  }
  
  printf("%d\n", 2*d);
  
  return 0;
} 