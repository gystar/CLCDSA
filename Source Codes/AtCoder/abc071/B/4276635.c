#include<stdio.h>
#include<string.h>
int main(){
  char s[100000];
  int i;
  scanf("%s",s);
  for(i=97;i<124;i++){
    if(strchr(s,i)==0) break;
  }
  if(i==123)puts("None");
  else printf("%c",i);
} 