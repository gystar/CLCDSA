#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n,i,j,min;
  int a[200];
  int cost[201];

  scanf("%d",&n);
 for(i = 0;i < n;i++)
    scanf("%d",&a[i]);

  for(i = 0;i < 201;i++)
    cost[i] = 0;

  for(i = 0;i < 201;i++)
    for(j = 0;j < n;j++)
      cost[i] = cost[i] + (a[j] - i + 100)*(a[j] - i + 100);

  min =  cost[0];
  for(i = 0;i <201;i++)
    if(min > cost[i])
      min = cost[i];

  printf("%d\n",min);

  return 0;
} 