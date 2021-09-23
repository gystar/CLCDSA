# include <stdio.h>
# include <stdlib.h>

int main(){
  char S[3];
  scanf("%s",S);
  if(S[0]==S[2]) puts("Yes");
  else puts("No");
  return 0;
} 