#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  long N, i;
  long sum = 0;
  long b = 0;
 
  scanf("%ld", &N);
 
  char S[N][32];
  long P[N];
 
  for(i = 0; i < N; i++){
    scanf("%s", S[i]);
    scanf("%ld", &P[i]);
    sum += P[i];
  }
 
  for(i = 0; i < N; i++){
    if(P[i] > (sum / 2)){
      printf("%s\n", S[i]);
      break;
    }else{
      b++;
    }
  }
 
  if(b == N){
    printf("atcoder\n");
  }
  
  return 0;
} 