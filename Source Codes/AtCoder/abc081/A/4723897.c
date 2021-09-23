#include <stdio.h>

int main() {
  char s[4];
  scanf("%s", s);
  int n,i;
  
  while(i < 3) {
    if(s[i] == '1')
      n++;
    i++;
  }
  printf("%d\n", n);
  
  return 0;
} 