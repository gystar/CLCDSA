#include<stdio.h>
 
int main(){
  int N, i, j;
  char s1[50][51], s2[50][51];
  scanf("%d", &N);
  
  for (i = 0; i < N; i++){
    scanf("%s", s1[i]);
  }
  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      s2[i][j] = s1[N - j - 1][i];
    }
    s2[i][j] = '\0';
    printf("%s\n", s2[i]);
  }
  
  return 0;
} 