#include <stdio.h>

int main(){
  char s[11];
  for(int i = 0; i < 11; ++i){
    scanf("%c",&s[i]);
  }
  s[3] = '8';
  printf("%s",s);
  return 0;
} 