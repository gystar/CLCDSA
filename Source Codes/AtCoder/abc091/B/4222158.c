#include<stdio.h>
#include<string.h>

char list[200][11], p = 0;
int check(char *s){
  int i;
  for (i = 0; i < p; i++){
    if(strcmp(list[i], s) == 0){
      return i;
    }
  }
  strcpy(list[i], s);
  p++;
  return i;
}

int main(){
  int N, M, count[201] = {0}, max = -100, q;
  char s[11];
  
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%s",s);
    count[check(s)]++;
  }
  scanf("%d", &M);
  for (int i = 0; i < M; i++){
    scanf("%s", s);
    count[check(s)]--;
  }
  
  for (int i = 0; i < 200; i++){
    if(max < count[i]){
      max = count[i];
    }
  }
  
  printf("%d\n", max);
  
  return 0;
} 