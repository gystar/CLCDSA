#include<stdio.h>
#include<string.h>

#define max 51

int main(void)
{
  int n;
  int i,j;
  char name[max][max];
  int vote[max]={0};
  int tosen=0;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%s",name[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=i;j<max;j++)
	{
	  if(strcmp(name[i],name[j])==0)
	    {
	      vote[i]++;
	    }
	}
    }

  for(i=0;i<n;i++)
    {
      if(vote[i]>vote[tosen])
	{
	  tosen=i;
	}
    }

  printf("%s\n",name[tosen]);

  return 0;
} 