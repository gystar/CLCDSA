#include <stdio.h>
#include <string.h>
int main(void){
  char s[100000];
  int i,a[26]={0};
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    a[s[i]-97]++;
  }
  for(i=0;i<26;i++){
    if(a[i]==0) {printf("%c",i+97);return 0;} 
  }
  printf("None");
  return 0;
} 