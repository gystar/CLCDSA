#include<stdio.h>

int main(void){
  char s[101];
  scanf("%s",s);
  if(s[0]=='a' && s[1]=='\0') printf("-1");
  else printf("a\n");
  return 0;
} 