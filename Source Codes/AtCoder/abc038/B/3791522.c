#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int H1, W1, H2, W2;

  scanf("%d%d%d%d", &H1, &W1, &H2, &W2);

  if((H1 == H2) || (H1 == W2) || (W1 == H2) || (W1 == W2)){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  
  return 0;
} 