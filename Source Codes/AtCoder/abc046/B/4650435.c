#include <stdio.h>

int main(){
  int n,k;
  scanf("%d %d", &n, &k);
  int answer = k;
  for(int i = 1; i < n; ++i) answer *= (k - 1);
  printf("%d\n", answer);
  return 0;
} 