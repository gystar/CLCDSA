#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char S[128];
  int N, i, j, len;

  scanf("%s", S);
  scanf("%d", &N);

  len = strlen(S);

  char T[len];

  for(i = 0; i < len; i++){
    T[i] = S[i];
  }
  
  int l[N], r[N];

  for(i = 0; i < N; i++){
    scanf("%d%d", &l[i], &r[i]);
    for(j = l[i] - 1; j < r[i]; j++){
      T[j] = S[l[i] + r[i] - 2 - j];
    }
    for(j = 0; j < len; j++){
      S[j] = T[j];
    }
  }

  for(i = 0; i < len; i++){
    printf("%c", T[i]);
  }
  printf("\n");
  
  return 0;
} 