#include<stdio.h>
#include<string.h>

int main(void){
  char s[50];
  scanf("%s",s);
  if(s[strlen(s)-1]=='T') printf("YES\n");
  else printf("NO\n");
  return 0;
} 