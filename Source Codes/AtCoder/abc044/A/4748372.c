#include <stdio.h>

int main()
{
  int n,k,x,y;
  scanf("%d %d %d %d", &n,&k,&x,&y);
  int sum = 0;
  for(int i=1; i<=n;i++){
    if(i >= k+1)
      sum += y;
    else
      sum += x;
  }
  printf("%d", sum);
  return 0;
} 