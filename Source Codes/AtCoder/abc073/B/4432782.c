#include<stdio.h>
int main(void)
{
  int n, i=0;
  int a, b, ans, x;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d %d", &a, &b);
    x=b-a+1;
    ans+=x;
    x=0;
  }
  printf("%d", ans);
  return 0;
  } 