#include<stdio.h>

int main(){
  int N, A[100000], C[100000] = {0}, i, count = 0;
  
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &A[i]);
    if(C[A[i] - 1] == 1){
      count++;
    } else {
      C[A[i] - 1] = 1;
    }
  }
  
  printf("%d\n", count);
  
  return 0;
} 