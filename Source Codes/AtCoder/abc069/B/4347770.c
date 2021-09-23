#include<stdio.h>
#include<string.h>
int main(){
  char S[200];
  scanf("%s",S);
  printf("%c%d%c\n",S[0],strlen(S)-2,S[strlen(S)-1]);
  return 0;
} 