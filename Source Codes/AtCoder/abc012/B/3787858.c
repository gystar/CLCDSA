#include<stdio.h>

int main(void){
  int a,b,c,n;
  
  scanf("%d",&n);
  
  a = n/3600;
  b = (n%3600)/60;
  c = (n%3600)%60;
  
  printf("%02d:%02d:%02d\n",a,b,c);
  
  return 0;
} 