#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
  char s[8],t[8];
  int n;
  
  scanf("%s %s",s,t);
  strcat(s,t);
  
  n = atoi(s);
  
  printf("%d\n",n*2);
  
  return 0;
} 