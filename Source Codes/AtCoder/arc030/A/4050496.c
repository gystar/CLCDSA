#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long n, k;

  scanf("%ld%ld", &n, &k);

  if(n >= 2 * k){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  
  return 0;
} 