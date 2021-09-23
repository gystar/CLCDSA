#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int N, i, j;

  scanf("%d", &N);

  char s[N][N];
  char t[N][N];

  for(i = 0; i < N; i++){
    scanf("%s", s[i]);
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      t[i][j] = s[N - j - 1][i];
    }
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("%c", t[i][j]);
    }
    printf("\n");
  }
  
  return 0;
} 