#include <stdio.h>

int main() {
  int K;
  scanf("%d",&K);
  int odd,even;
  even = K/2;
  if (even*2 == K) odd = even;
  else odd = even + 1;
  printf("%d\n",odd*even);
  return 0;
} 