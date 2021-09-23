#include<stdio.h>
int main(void)
{
  int n, ans=0, i=0;
  scanf("%d", &n);
  for(i=0;i<=n;i++){
    ans+=i;
  }
  printf("%d", ans);
  return 0;
} 