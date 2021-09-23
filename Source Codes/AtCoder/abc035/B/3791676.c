#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  char S[1000000];
  long x = 0, y = 0, z = 0;
  long len = 0;
  long i;
  int T;

  scanf("%s", S);
  scanf("%d", &T);

  while(S[len]){
    len++;
  }

  for(i = 0; i < len; i++){
    if(S[i] == 'L'){
      x--;
    }else if(S[i] == 'R'){
      x++;
    }else if(S[i] == 'U'){
      y++;
    }else if(S[i] == 'D'){
      y--;
    }else{
      z++;
    }
  }

  if(T == 1){
    printf("%ld\n", labs(x) + labs(y) + z);
  }else if(labs(x) + labs(y) - z >= 0){
    printf("%ld\n", labs(x) + labs(y) - z);
  }else if((labs(x) + labs(y) - z) % 2 == 0){
    printf("0\n");
  }else{
    printf("1\n");
  }
  
  return 0;
} 