#include<stdio.h>
#include<string.h>
int main(void){
  int i,p=0;
  char s[100001];
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)if(s[i]=='p')p++;
  printf("%d",strlen(s)/2-p);
  return 0;
} 