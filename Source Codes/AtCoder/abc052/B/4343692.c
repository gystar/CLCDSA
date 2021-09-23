#include <stdio.h>
int main(void) {
  int n,i,max=0,x=0;
  char s[111];
  scanf("%d%s",&n,s);
  for(i=0;i<n;i++) {
    if(s[i]=='I') x++;
    if(s[i]=='D') x--;
    if(x>max) max=x;
  }
  printf("%d",max);
} 