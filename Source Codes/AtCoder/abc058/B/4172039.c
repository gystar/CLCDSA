#include <stdio.h>

int main(void){
  char o[55] = { '\0' };
  char e[55] = { '\0' };
  scanf("%s", o);
  scanf("%s", e);
  int flag = 1;
  int oc = 0;
  int ec = 0;
  while(o[oc] != '\0') oc++;
  while(e[ec] != '\0') ec++;
  if(oc == ec){
    for(int i = 0; i < oc; i++) printf("%c%c", o[i], e[i]);
  }else{
    for(int i = 0; i < ec; i++) printf("%c%c", o[i], e[i]);
    printf("%c", o[oc - 1]);
  }
  printf("\n");
  return 0;
} 