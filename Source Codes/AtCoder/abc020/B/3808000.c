#include<stdio.h>

int main(){
  int a, b, c, x, p = 0, q = 1;
  scanf("%d %d", &a, &b);
  x = b;
  while(x%10 != 0 || x/10 != 0){
    x = x/10;
    p++;
  }
  for(int i = 0; i < p; i++){
    q = q*10;
  }
  c = b + a*q;
  printf("%d\n", c*2);
} 