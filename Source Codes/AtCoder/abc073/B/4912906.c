#include <stdio.h>
int main(void)
{
  int n, i, x=0, j;
  scanf("%d", &n);
  int a[n], b[n], ans[n];
  for(i=0;i<n;i++){
    scanf("%d %d", &a[i], &b[i]);
    ans[i]=b[i]-a[i]+1;
  }
  for(j=0;j<n;j++){
    x+=ans[j];
  }
  printf("%d", x);
  return 0;
} 