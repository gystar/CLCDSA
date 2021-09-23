#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  char S[1000000];
  int len, i, z = 0, ans = 0;

  scanf("%s", S);

  len = strlen(S);

  for(i = 0; i < len; i++){
    if(S[i] == '0'){
      z++;
    }else if(S[i] == '+' || i == len - 1){
      if(z == 0){
	ans++;
      }else{
	z = 0;
      }
    }
  }

  printf("%d\n", ans);
  
  return 0;
} 