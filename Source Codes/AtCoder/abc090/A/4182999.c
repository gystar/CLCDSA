# include <stdio.h>

int main(){
  char S[4][4];
  int i;
  for(i=0;i<3;i++){
    scanf("%s",S[i]);
  }
  printf("%c%c%c\n",S[0][0],S[1][1],S[2][2]);

  return 0;
} 