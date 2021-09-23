#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  char S[5];
  int N, k, r;

  scanf("%s", S);
  scanf("%d", &N);

  if(N % 5 == 0){
    k = N / 5;
    printf("%c%c\n", S[k - 1], S[4]);
  }else{
    k = N / 5;
    r = N % 5;
    printf("%c%c\n", S[k], S[r - 1]);
  }
  
  return 0;
} 