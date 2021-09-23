#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  scanf("%s",s);
  printf("%c%d%c",s[0],strlen(s)-2,s[strlen(s)-1]);
} 