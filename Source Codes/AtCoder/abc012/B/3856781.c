#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N;
  int h, m, s;

  scanf("%d", &N);

  h = N / 3600;
  m = (N % 3600) / 60;
  s = N % 60;

  if(h < 10){
    printf("0%d:", h);
  }else{
    printf("%d:", h);
  }

  if(m < 10){
    printf("0%d:", m);
  }else{
    printf("%d:", m);
  }

  if(s < 10){
    printf("0%d\n", s);
  }else{
    printf("%d\n", s);
  }
   
  return 0;
} 