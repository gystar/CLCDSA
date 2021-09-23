#include <stdio.h>

int main(void){
  long long N;
  scanf("%lld",&N);
  N++;
  int i;
  for(i = 0;N > 1;i = (i+1)%2){
    if(i == 0) N = (N+1)/2;
    else N /= 2;
  }
  if(i == 0) printf("Takahashi\n");
  else printf("Aoki\n");

  return 0;
} 