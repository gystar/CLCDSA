#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  if(N%2 == 0) printf("%d\n",N-1);
  else printf("%d\n",N+1);

  return 0;
} 