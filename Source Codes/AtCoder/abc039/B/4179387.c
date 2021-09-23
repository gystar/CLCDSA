#include<stdio.h>

int main(){
  long X;
  scanf("%ld", &X);
  X = (int)sqrt(X);
  X = (int)sqrt(X);
  printf("%d\n", X);
  return 0;
} 