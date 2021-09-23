#include <stdio.h>

int main(){
  char S[3][4];
  int k;
  for(k=0;k<2;k++){
    scanf("%s",S[k]);
  }
  if(S[0][0]==S[1][2]&&S[0][1]==S[1][1]&&S[0][2]==S[1][0]) puts("YES");
  else puts("NO");
  return 0;
} 