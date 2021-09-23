#include <stdio.h>

int main() {
  int N;
  scanf("%d",&N);
  int a=N/100;
  int solve=100*a+10*a+a;
  if ((solve) >= N) printf("%d\n",solve);
  else printf("%d\n",solve+111);
  return 0;
} 