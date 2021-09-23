#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){
  
  long long N;
  long long i;
  long long ans = 0;

  scanf("%lld", &N);

  char S[N][16];
  long long M = 0, A = 0, R = 0, C = 0, H = 0;
  
  for(i = 0; i < N; i++){
    scanf("%s", S[i]);
    if(S[i][0] == 'M'){
      M++;
    }else if(S[i][0] == 'A'){
      A++;
    }else if(S[i][0] == 'R'){
      R++;
    }else if(S[i][0] == 'C'){
      C++;
    }else if(S[i][0] == 'H'){
      H++;
    }
  }

  ans += (M * A * R) + (M * A * C) + (M * A * H) + (M * R * C) + (M * R * H) + (M * C * H) + (A * R * C) + (A * R * H) + (A * C * H) + (R * C * H);

  printf("%lld\n", ans);
  
  return 0;
} 