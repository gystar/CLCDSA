#include <stdio.h>
#include <string.h>

int main(void) {
  char s[101];
  int a_f[7] = {};
  scanf("%s",s);
  for(int i=0; i<strlen(s); i++) {
    a_f[s[i]-'A']++;
  }
  for(int i=0; i<6; i++) {
    if(i!=5) printf("%d ",a_f[i]);
    else printf("%d\n",a_f[i]);
  }
  return 0;
} 