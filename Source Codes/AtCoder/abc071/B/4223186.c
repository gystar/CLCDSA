#include <stdio.h>
#include <string.h>

int main(void){
  char S[100000];
  int flag[26];
  scanf("%s",S);

  for(int i = 0;i < 26;i++) flag[i] = 0;

  for(int i = 0;i < strlen(S);i++){
    flag[S[i]-97]++;
  }

  for(int i = 0;i < 26;i++){
    if(!flag[i]){
      printf("%c\n",i+97);
      return 0;
    }
  }

  printf("None\n");
  return 0;
} 