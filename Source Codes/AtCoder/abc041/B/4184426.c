#include<stdio.h>

int main(){
  long A, B, C, V;
  scanf("%lld %lld %lld", &A, &B, &C);
  A = A%(1000000000 + 7);
  B = B%(1000000000 + 7);
  C = C%(1000000000 + 7);
  A = (A*B)%(1000000000 + 7);
  V = (A*C)%(1000000000 + 7);
  
  printf("%lld\n", V);
  
  return 0;
} 