#include<stdio.h>

int main(void)
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  if(c==a+b&&c!=a-b){
    printf("+\n");
  }else if(c!=a+b&&c==a-b){
    printf("-\n");
  }else if(c==a+b&&c==a-b){
    printf("?\n");
  }else if(c!=a+b&&c!=a-b){
    printf("!\n");
  }

  return 0;
} 