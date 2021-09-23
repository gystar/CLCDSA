#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long x, y, k;

  scanf("%ld%ld%ld", &x, &y, &k);

  if(k <= y){
    printf("%ld\n", x + k);
  }else{
    printf("%ld\n", x + y - (k - y));
  }
  
  return 0;
} 