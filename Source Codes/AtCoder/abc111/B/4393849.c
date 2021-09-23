#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void){
  int n,i,j;
  scanf("%d",&n);
  for(i=n;i<=999;i++){
    char s[10]={'\0'};
    sprintf(s,"%d",i);
    if(s[0]==s[1]&&s[1]==s[2]){printf("%d",i);return 0;}
  }
  return 0;
} 