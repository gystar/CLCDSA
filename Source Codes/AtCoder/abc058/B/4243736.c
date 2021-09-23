#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
  char o[50],e[50];
  int i,j;
  scanf("%s %s",o,e);
  double sum=fmax(strlen(o),strlen(e));
  for(i=0;i<sum;i++){
    if(o[i]!='\0') printf("%c",o[i]);
    if(e[i]!='\0') printf("%c",e[i]);
  }
  return 0;
} 