#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long N, L, i;
  long t = 1, ans = 0;

  scanf("%ld%ld", &N, &L);

  char S[N];

  scanf("%s", S);

  for(i = 0; i < N; i++){
    if(S[i] == '+'){
      t++;
    }else{
      t--;
    }
    if(t > L){
      t = 1;
      ans++;
    }
  }

  printf("%ld\n", ans);
  
  return 0;
} 