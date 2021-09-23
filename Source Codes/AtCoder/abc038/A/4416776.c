#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  char s[50];
  scanf("%s",s);
  if(s[strlen(s)-1]=='T') printf("YES");
  else printf("NO");
  return 0;
} 