#include<stdio.h>
#include<string.h>
int main(){
  char s[111];
  long long i,k;
  scanf("%s%lld",s,&k);
  for(i=0;i<strlen(s);i++){
    if(s[i]!='1') break;
  }
  if(k<=i) puts("1");
  else printf("%c",s[i]);
} 