#include <stdio.h>

int
main(int argc, char *argv[])
{
  int a[3]; int m = 100; int M = 1;
  for(int i = 0; i < 3; i++){
    scanf("%d", &a[i]);
    if(m > a[i]) m = a[i];
    if(M < a[i]) M = a[i];
  }
  
  int ans = M - m;
  
  printf("%d\n", ans);
  
  return 0;
} 