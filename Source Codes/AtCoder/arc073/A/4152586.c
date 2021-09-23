#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long N, T, i, ans = 0;

  scanf("%ld%ld", &N, &T);

  long t[N];

  for(i = 0; i < N; i++){
    scanf("%ld", &t[i]);
  }

  for(i = 0; i < N - 1; i++){
    if(t[i] + T < t[i + 1]){
      ans += T;
    }else{
      ans += t[i + 1] - t[i];
    }
  }
  ans += T;

  printf("%ld\n", ans);
  
  return 0;
} 