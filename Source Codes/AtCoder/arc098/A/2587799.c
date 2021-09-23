#include "stdio.h"



int main(void)
{
  unsigned N;
  int count = 0;
  unsigned min = 114514919;
  scanf("%d",&N);
  char S[N];
  scanf("%s",S);
  for(int i = 1;i < sizeof(S);i++)
    {
      if(S[i] == 'E')
	count++;
    }
  min = count;
  
  for(int i = 1;i < sizeof(S);i++)
    {
      if(S[i] == 'W')
	{
	  count++;
	}
      if(S[i - 1] == 'E')
	{
	  count--;
	}
      if(min > count)
	{
	  min = count;
	}
    }
  printf("%d\n",min);
} 