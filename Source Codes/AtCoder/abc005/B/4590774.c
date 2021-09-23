#include<stdio.h>

int main(void)
{
  int n;
  int t[100]={0};
  int i;
  int min;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&t[i]);
    }

  min=t[0];
  for(i=1;i<n;i++)
    {
      if(t[i]<min){
	min=t[i];
      }
    }
  printf("%d\n",min);
  return 0;
} 