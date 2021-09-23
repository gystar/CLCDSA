#include <stdio.h>
int main(){
  int i, N, sum=0, l, r;
  scanf("%d", &N);
  for (i=0; i<N; i++){
    scanf("%d%d", &l,&r);
    sum = sum + r - l + 1;
  }
  printf("%d", sum);
return 0;
} 