#include<stdio.h>

int main(void)
{
	int i,j;
  	int a;
  	int num=0;
  	int count=0;
  	scanf("%d",&a);
  	for(i=1;i<=a;i=i+2)
    {
      for(j=i;j>0;j--)
      {
        if(i%j==0) count++;
      }
      if(count==8) num++;
      count=0;
    }
  	printf("%d",num);
  	return 0;
} 