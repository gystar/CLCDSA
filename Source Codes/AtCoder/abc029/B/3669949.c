#include <stdio.h>
#include <string.h>

int main(void) {
  int cnt = 0;
  char s[13][11];
  for(int i=0; i<12; i++) {
    scanf("%s",s[i]);
    if((strchr(s[i],'r') != NULL)) cnt++;
  }
  printf("%d\n",cnt);
  return 0;
} 