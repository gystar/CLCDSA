#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
 
  long long N, i, ans = 0;

  scanf("%lld", &N);

  long long A[N], B[N];

  for(i = 0; i < N; i++){
    scanf("%lld%lld", &A[i], &B[i]);
  }

  for(i = N - 1; i >= 0; i--){
    if((A[i] + ans) % B[i] == 0){
      ans += 0;
    }else{
      ans += B[i] - ((A[i] + ans) % B[i]);
    }
  }

  printf("%lld\n", ans);
  
  return 0;
} 