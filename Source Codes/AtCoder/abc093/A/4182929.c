# include <stdio.h>

int main(){
  char S[3];
  scanf("%s",S);
  if(S[0]==S[1]||S[1]==S[2]||S[2]==S[0]) puts("No");
  else puts("Yes");
  return 0;
} 