#include<stdio.h>

int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);

  printf("%d\n",(b-a)*(b-a-1)/2-a);
  return 0;
} 