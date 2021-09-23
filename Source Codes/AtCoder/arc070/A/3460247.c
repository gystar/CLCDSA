#include <stdlib.h>
#include <stdbool.h>
 
int main(void){

  long X;
  long sum = 0;
  long i = 0;

  scanf("%ld", &X);

  while(sum < X){
    i++;
    sum += i;
  }

  printf("%ld\n", i);
  
  return 0;
} 