#include <stdio.h>

int main(void){
  long long N,sample;
  scanf("%lld",&N);

  sample = N;
  int sum = 0;
  while(sample > 0){
    sum += sample%10;
    sample /= 10;
  }

  if(N%sum == 0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
} 