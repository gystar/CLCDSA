#include<stdio.h>
#include<string.h>

int main(void){
  int a,b,i;
  char s[200001];
  scanf("%s",s);
  for(i=0;s[i]!='A';i++);
  a=i;
  for(i=strlen(s)-1;s[i]!='Z';i--);
  b=i;
  printf("%d\n",b-a+1);
  return 0;
} 