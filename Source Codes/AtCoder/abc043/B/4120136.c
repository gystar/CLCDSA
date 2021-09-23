#include <stdio.h>
#include <string.h>
int main(void){
  char s[11],t[11]="";
  int i;
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    if(s[i]=='B') t[strlen(t)-1]='\0';
    else t[strlen(t)]=s[i];
  }
  printf("%s",t);
  return 0;
} 