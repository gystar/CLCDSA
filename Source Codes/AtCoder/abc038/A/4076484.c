#include <stdio.h>
int main() {
  char s[51];
  int i;
  scanf("%s", s);
  for (i=0; s[i]!=0; i++);
  if (s[i-1]=='T') printf("YES\n");
  else printf("NO\n");
  return 0;
} 