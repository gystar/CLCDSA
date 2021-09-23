#include <stdio.h>
int main(void){
int A,B,c;
  scanf("%d %d",&A,&B);
  c=A+B;
  if(A+B>=24){c=A+B-24;}
  printf("%d",c);
return 0;
} 