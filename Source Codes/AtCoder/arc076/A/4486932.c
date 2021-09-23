#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long long N, M, i, ans = 1;

  scanf("%lld%lld", &N, &M);

  if(llabs(N - M) >= 2){
    printf("0\n");
  }else if(llabs(N - M) == 1){
    for(i = 1; i <= N; i++){
      ans = (ans * i) % 1000000007;
    }
    for(i = 1; i <= M; i++){
      ans = (ans * i) % 1000000007;
    }
    printf("%lld\n", ans);
  }else{
    for(i = 1; i <= N; i++){
      ans = (ans * i) % 1000000007;
    }
    for(i = 1; i <= M; i++){
      ans = (ans * i) % 1000000007;
    }
    ans = (ans * 2) % 1000000007;
    printf("%lld\n", ans);
  }
	
  return 0;
} 