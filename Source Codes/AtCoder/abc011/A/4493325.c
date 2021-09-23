#include <stdio.h>

int main(void){
  int n, Next;
  scanf("%d", &n);
  Next = n % 12;
  Next = Next + 1;
  printf("%d", Next);
  return 0;
} 