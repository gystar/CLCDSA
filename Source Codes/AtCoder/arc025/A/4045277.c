#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int D[7], J[7], i, max[7];
  int ans = 0;

  for(i = 0; i < 7; i++){
    scanf("%d", &D[i]);
  }
  for(i = 0; i < 7; i++){
    scanf("%d", &J[i]);
    if(D[i] > J[i]){
      max[i] = D[i];
    }else{
      max[i] = J[i];
    }
  }

  for(i = 0; i < 7; i++){
    ans += max[i];
  }

  printf("%d\n", ans);
  
  return 0;
} 