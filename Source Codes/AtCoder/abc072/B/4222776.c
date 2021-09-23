#include <stdio.h>
#include <string.h>

int main(void){
  char S[100000];
  scanf("%s",S);

  for(int i = 0;i < strlen(S);i += 2){
    printf("%c",S[i]);
  }
  printf("\n");

  return 0;
} 