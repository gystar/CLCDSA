#include<ctype.h>
#include<stdio.h>
int main(void){
  char s[10],t[10],u[10];
  scanf("%s %s %s",s,t,u);
  printf("%c%c%c\n",toupper(s[0]),toupper(t[0]),toupper(u[0]));
  return 0;
} 