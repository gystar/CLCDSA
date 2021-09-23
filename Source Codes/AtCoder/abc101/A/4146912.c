#include <stdio.h>

int main(void){
  char s[5] = { '\0' };
  scanf("%4s", s);
  int num = 0;
  for(int i = 0; i < 4; i++){
    if(s[i] == '+') num++;
    else num--;
  }
  printf("%d\n", num);
  return 0;
} 