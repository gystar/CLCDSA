#include <stdio.h>

int main()
{
  int n, min = 1e9, max = 1, i, a;
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    scanf("%d",&a);
    if(a < min) { min = a;}
    if(max < a) { max = a;}
  }
  printf("%d", max - min);
  return 0;
} 