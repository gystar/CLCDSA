#include<stdio.h>
#include<stdio.h>

int main(void)
{
  int n,i,ans=0,count,max=0;
  scanf("%d",&n);
  int p[n],index[n];
  for(i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
      index[p[i]-1] = i;
    }
  
  if(n == 1)
    {
      printf("0\n");
      return 0;
    }
  
  count = 1;
  for(i=1;i<n;i++)
    {
      
      if(index[i] > index[i-1])
	{	
	count++;
	}
      else
	{
	  count = 1;
	}
      if(max < count)
	{
	  max = count;
	}
    }
  ans = n - max;
  printf("%d\n",ans);
  return 0;
} 