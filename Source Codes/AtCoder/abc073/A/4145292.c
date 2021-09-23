#include <stdio.h>

int main(void){
  int n, m;
  scanf("%d", &n);
  m = n % 10;
  n /= 10;
  if(n == 9 || m == 9) printf("Yes\n");
  else printf("No\n");
  return 0;
} 