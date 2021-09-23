#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char s[1024];
  int len, i, count = 1;
  
  scanf("%s",s);

  len = strlen(s);

  for(i = 0; i < len; i++){
    if(s[i] == s[i + 1]){
      count++;
    }else{
      printf("%c%d", s[i], count);
      count = 1;
    }
  }

  printf("\n");
  
  return 0;
} 