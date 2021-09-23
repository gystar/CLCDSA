#include<stdio.h>
#include<string.h>
int main(){
  int i;
  char s[100001];
  scanf("%s",s);
  for(i=0;i<strlen(s);i+=2){
    printf("%c",s[i]);
  }
} 