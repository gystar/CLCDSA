#include <stdio.h>
#include <math.h>

int main(void){
  long N;
  scanf("%ld",&N);

  long ans;
  for(int j = sqrt(N);j >= 1;j--){
    if(N%j == 0){
      ans = N/j;
      break;
    }
  }

  int cnt = 0;
  while(ans > 0){
    cnt++;
    ans /= 10;
  }

  printf("%d\n",cnt);

  return 0;
} 