#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  char s[100];
  scanf("%s",s);
  int n=strlen(s)-2;
  printf("%c%d%c",s[0],n,s[n+1]);
  return 0;
} 