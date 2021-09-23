#include<stdio.h>

int main(void)
{
  int a,b;
  int temp;
  int i;
  int digit=0;
  scanf("%d%d",&a,&b);
  temp=b;
  while(b>0)
    {
      b/=10;
      digit++;
    }
  
  for(i=0;i<digit;i++){
    a=a*10;
  }

  printf("%d\n",(a+temp)*2);

  return 0;
} 