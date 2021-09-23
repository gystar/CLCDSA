#include<stdio.h>

int main(){
  char s[101];long long int k,i=0;
  scanf("%s",s);
  scanf("%lld",&k);
  while(s[i] == '1')i++;
  if(i >= k) printf("1");
  else printf("%c",s[i]);
  return 0;
} 