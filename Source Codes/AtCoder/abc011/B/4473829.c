#include<stdio.h>
#include<string.h>
int main(void){
  int i,a='a'-'A';
  char s[13];
  scanf("%s",s);
  if(('a'<=s[0]) && (s[0]<='z')) s[0]-=a;
  for(i=1;i<strlen(s);i++){
    if(('A'<=s[i]) && (s[i]<='Z')) s[i]+=a;
  }
  printf("%s\n",s);
  return 0;
} 