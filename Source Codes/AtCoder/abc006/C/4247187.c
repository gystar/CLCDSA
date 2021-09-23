#include<stdio.h>

int main(){
  int N, M;
  scanf("%d %d", &N, &M);
  
  for (int i = 0; i <= 100000; i++){
    if(4*N - M - 2*i >= 0 && M + i - 3*N >= 0){
      printf("%d %d %d", i, 4*N - M - 2*i, M + i - 3*N);
      return 0;
    }
  }
  printf("-1 -1 -1\n");
  
  return 0;
} 