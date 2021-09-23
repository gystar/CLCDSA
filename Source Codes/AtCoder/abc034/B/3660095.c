#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d",&n);
  printf("%d\n",n%2?n+1:n-1);
  return 0;
} 