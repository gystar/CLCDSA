#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  int a,b,n;
  
  scanf("%d",&n);
  
  a = n%10;
  b = (n-a)/10;
  
  printf("%d\n",a+b);
  
  return 0;
} 