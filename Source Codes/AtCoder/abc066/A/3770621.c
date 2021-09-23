#include<stdio.h>
int a, b, c, ans, max;
int main(){
  scanf("%d%d%d", &a, &b, &c);
  max=a;
  if(b>max){max=b;}
  if(c>max){max=c;}
  printf("%d\n", a+b+c-max);
} 