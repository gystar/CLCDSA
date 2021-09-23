#include<stdio.h>
int n, a, b;
long ans;
int main(){
  scanf("%d%d%d", &n ,&a, &b);
  ans = ((long)n-2)*(b-a)+1;
  printf("%ld\n", ans>=0?ans:0);
} 