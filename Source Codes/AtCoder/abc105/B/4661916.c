#include <stdio.h>

int main(void)
{
  int n, sum, i, j;
  scanf("%d", &n);
  int dn = n / 7, flag = 0;
  for(i = 0; i <= dn; ++i) {
    if( (n - i*7)% 4 == 0) { flag = 1; break; }
  }
  
  if(flag == 1) { printf("Yes\n"); } else { printf("No\n"); }
    
  return 0;
} 