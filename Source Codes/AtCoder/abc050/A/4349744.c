#include<stdio.h>
int main(void){
  int a,b;
  char op;
  scanf("%d %c %d",&a,&op,&b);
  //printf("%c\n",op);
  if(op=='+') printf("%d\n",a+b);
  else printf("%d\n",a-b);
  return 0;
} 