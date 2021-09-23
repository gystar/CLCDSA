#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(void){
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<=25;i++){
    for(j=0;j<=15;j++){
      if(i*4+j*7==n) {printf("Yes");return 0;}
    }
  }
  printf("No");
  return 0;
} 