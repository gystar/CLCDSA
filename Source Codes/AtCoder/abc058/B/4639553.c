#include <stdio.h>
int main(){
  char o[51], e[51];
  scanf("%s%s", o, e);
  char c = o[0];
  int cnt = 1;
  int idx = 0;
  while(c != '\0' && c != '\n'){
    putchar(c);
    cnt = 1 - cnt;
    if(cnt == 1){
      idx++;
      c = o[idx];
    }else{
      c = e[idx];
    }
  }
  putchar('\n');
  return 0;
} 