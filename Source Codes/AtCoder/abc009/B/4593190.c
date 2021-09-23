#include<stdio.h>

int main(void)
{
  int n;
  int price[100];
  int i;
  int max=0;
  int answer=1;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&price[i]);
    }
  for(i=0;i<n;i++)
    {
      if(price[i]>price[max])
	{
	  answer=max;
	  max=i;
	}else if(price[answer]<price[i]&&price[i]<price[max]){
	answer=i;
      }
    }
  printf("%d\n",price[answer]);

  return 0;
} 