#include<stdio.h>
#include<string.h>

int main(){
  int N, L, i, j;
  char s[100][101], t[101];
  
  scanf("%d %d", &N, &L);
  for (i = 0; i < N; i++){
    scanf("%s", s[i]);
    for (j = i; j > 0; j--){
      if(strcmp(s[j], s[j - 1]) < 0){
        strcpy(t, s[j]);
        strcpy(s[j], s[j - 1]);
        strcpy(s[j - 1], t);
      }
    }
  }
  
  for (i = 0; i < N; i++){
    printf("%s", s[i]);
  }
  printf("\n");
  
  return 0;
} 