#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  if(a == 1) a = 14;
  if(b == 1) b = 14;
  if(a > b) printf("Alice\n");
  if(a < b) printf("Bob\n");
  if(a == b) printf("Draw\n");
  return 0;
} 