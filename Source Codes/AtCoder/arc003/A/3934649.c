#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int sum = 0;

  scanf("%d", &N);

  char r[N];

  scanf("%s", r);

  for(i = 0; i < N; i++){
    if(r[i] == 'F'){
      continue;
    }else{
      sum += 'E' - r[i];
    }
  }

  printf("%.9f\n", (double)sum / N);
   
  return 0;
} 