#include<stdio.h>

int main(void){
  int n;
  char a[5];
  scanf("%s",a);
  scanf("%d",&n);
  printf("%c%c\n",a[(n-1)/5],a[(n-1)%5]);
  return 0;
} 