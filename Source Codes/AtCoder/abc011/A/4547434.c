#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  N++;
  if(N == 13) N = 1;
  printf("%d\n",N);

  return 0;
} 