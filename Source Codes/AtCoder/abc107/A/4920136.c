#include <stdio.h>

int
main(int argc, char *argv[])
{
  int N, i;
  scanf("%d%d", &N, &i);
  
  int ans = N - i + 1;
  
  printf("%d\n", ans);
  
  return 0;
} 