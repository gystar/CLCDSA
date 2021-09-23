#include<stdio.h>

int main(void)
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a%b==0){
    printf("0\n");
  }else{
    printf("%d\n",b-a%b);
  }
  return 0;
} 