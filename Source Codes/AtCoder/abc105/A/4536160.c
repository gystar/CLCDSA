#include <stdio.h>
 
int main(void) {
  int n, k, ans; scanf("%d %d", &n, &k);
  printf("%d\n", n%k != 0);
  return 0;
} 