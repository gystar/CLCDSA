#include <stdio.h>
int main(){
  char s[101];
  int i;
  scanf("%s %d", s, &i);
  printf("%c\n", s[i-1]);
  return 0;
} 