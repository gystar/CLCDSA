#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, K, i;
  int l = 0;

  scanf("%d%d", &N, &K);

  int t[N];

  for(i = 0; i < N; i++){
    scanf("%d", &t[i]);
  }

  for(i = 2; i < N; i++){
    if(t[i - 2] + t[i - 1] + t[i] < K){
      printf("%d\n", i + 1);
      l = 1;
      break;
    }
  }

  if(l == 0){
    printf("-1\n");
  }
  
  return 0;
} 