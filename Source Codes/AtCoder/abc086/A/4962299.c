#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  if(a % 2 == 1 && b % 2 == 1){
    printf("Odd");
  }else{
    printf("Even");
  }
  return 0;
} 