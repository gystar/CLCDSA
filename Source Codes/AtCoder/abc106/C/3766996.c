#include<stdio.h>
int main(void){
  char s[101];
  long long k;
  int i = 0;
  scanf("%s",s);
  scanf("%lld",&k);
  while(--k != 0 && s[i] == '1') i++;
  putchar(s[i]);
  return 0;
} 