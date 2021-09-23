#include<stdio.h>
int a, b, c;
int ans, i, j;
int main(){
  scanf("%d%d", &a, &b);
  c = b-a;
  ans = c*(c+1)/2 - b;
  printf("%d\n", ans);
} 