#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char N[128];
  int len, i;
  int t = 0;

  scanf("%s", N);

  len = strlen(N);

  for(i = 0; i < (len / 2); i++){
    if(N[i] != N[len - 1 - i]){
      t = 1;
      break;
    }
  }

  if(t == 1){
    printf("NO\n");
  }else{
    printf("YES\n");
  }
  
  return 0;
} 