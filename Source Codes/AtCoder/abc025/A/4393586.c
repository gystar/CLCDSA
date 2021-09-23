#include <stdio.h>

int main(void){
  char s[5];
  int N;
  scanf("%s%d",s,&N);

  printf("%c%c\n",s[((N-1)/5)%5],s[(N-1)%5]);

  return 0;
} 