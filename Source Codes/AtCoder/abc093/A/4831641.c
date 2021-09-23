#include <stdio.h>
int main(void){
  char s[4];
  int c = 1;
  scanf("%s", s);
  for(int i = 0; i < 3; i++){
      c *= s[i] - 'a' + 1;
  }
  printf("%s\n", (c == 6) ? "Yes" : "No");  
  return 0;
} 