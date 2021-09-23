#include <stdio.h>

int main(void){
  char s[4] = "ABC";
  int n;
  scanf("%d", &n);
  if(n >= 1000) s[2] = 'D';
  printf("%s\n", s);
  return 0;
} 