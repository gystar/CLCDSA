#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
  char s[64];

  scanf("%s",s);

  if(strcmp(s,"a") == 0){
    printf("-1\n");
  }else{
    printf("a\n");
  }

  return 0;
} 