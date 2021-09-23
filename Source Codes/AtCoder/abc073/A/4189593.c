#include <stdio.h>

int main(){
  char S[2];
  scanf("%s",S);
  if(S[0]=='9'||S[1]=='9') puts("Yes");
  else puts("No");

  return 0;
} 