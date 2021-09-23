#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
 
  long long x, y;

  scanf("%lld%lld", &x, &y);

  if(x * y > 0){
    if(x > y){
      printf("%lld\n", x - y + 2);
    }else{
      printf("%lld\n", y - x);
    }
  }else if(x * y < 0){
    printf("%lld\n", llabs(x + y) + 1);
  }else{
    if(x == 0){
      if(y > 0){
	printf("%lld\n", y);
      }else{
	printf("%lld\n", x - y + 1);
      }
    }else{
      if(x > 0){
	printf("%lld\n", x - y + 1);
      }else{
	printf("%lld\n", y - x);
      }
    }
  }
  
  return 0;
} 