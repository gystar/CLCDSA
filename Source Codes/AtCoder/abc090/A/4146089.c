#include <stdio.h>

int main(void){
  char one[4];
  char two[4];
  char three[4];
  char ans[4] = {'\0'};
  scanf("%3s", one);
  scanf("%3s", two);
  scanf("%3s", three);
  ans[0] = one[0];
  ans[1] = two[1];
  ans[2] = three[2];
  printf("%s\n", ans);
  return 0;
} 