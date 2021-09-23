#include <stdio.h>

int main(void){
  char s[4] = {'\0'};
  scanf("%3s", s);
  int num = 700;
  for(int i = 0; i < 3; i++){
    if(s[i] == 'o') num += 100;
  }
  printf("%d\n", num);
  return 0;
} 