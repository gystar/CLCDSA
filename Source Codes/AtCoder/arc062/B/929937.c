#include<stdio.h>
int main(){
  int g=0,p=0,i;
  char s[100010];
  scanf("%s",s);
  for(i=0;s[i];i++)s[i]-'p'?(g++):(p++);
  printf("%d\n",(g-p)/2);
  return 0;
} 