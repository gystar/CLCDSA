#include <stdio.h>
#include <string.h>

int main(void){
  char o[50],e[50];

  scanf("%s%s",o,e);

  for(int i = 0;i < strlen(e);i++){
    printf("%c%c",o[i],e[i]);
  }

  if(strlen(e) != strlen(o)) printf("%c",o[strlen(o)-1]);
  printf("\n");

  return 0;
} 