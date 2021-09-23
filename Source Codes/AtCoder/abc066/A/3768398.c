#include <stdio.h>

int main(){
  int a, b, c;
  int min;
  scanf("%d %d %d", &a, &b, &c);
  min = b+c;
  if(c+a < min){
    min = c+a;
  }
  if(a+b < min){
    min = a+b;
  }
  printf("%d\n", min);
  return 0;
} 