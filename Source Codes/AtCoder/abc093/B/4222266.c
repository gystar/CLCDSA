#include<stdio.h>

int main(){
  int A, B, K, i, C;
  scanf("%d %d %d", &A, &B, &K);
  
  C = A + K;
  if(C > B){
    C = B + 1;
  }
  for (i = A; i < C; i++){
    printf("%d\n", i);
  }
  C = B - K + 1;
  if(i > C){
    C = i;
  }
  for (i = C; i <= B; i++){
    printf("%d\n", i);
  }
  
  return 0;
} 