#include<stdio.h>

int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a+b>=24){
    printf("%d\n",b-(24-a));
  }else{
    printf("%d\n",a+b);
  }
  return 0;
} 