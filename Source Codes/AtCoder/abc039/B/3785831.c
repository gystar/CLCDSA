#include<stdio.h>
int X, N;
int main(){
  scanf("%d", &X);
  while(N*N*N*N != X){
    N++;
  }
  printf("%d\n", N);
} 