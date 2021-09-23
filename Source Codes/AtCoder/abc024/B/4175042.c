#include<stdio.h>

int main(){
  long N, T, A[100000], i, time = 0;
  
  scanf("%ld %ld", &N, &T);
  scanf("%ld", &A[i]);
  for (i = 1; i < N; i++){
    scanf("%ld", &A[i]);
    if(A[i] - A[i - 1] >= T){
      time += T;
    } else {
      time += A[i] - A[i - 1];
    }
  }
  time += T;
  printf("%ld\n", time);
  
  return 0;
} 