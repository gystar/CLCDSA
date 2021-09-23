#include <stdio.h>
#include <string.h>

int main(void){
  char S[50];
  scanf("%s",S);

  if(S[strlen(S)-1] =='T') printf("YES\n");
  else printf("NO\n");

  return 0;
} 