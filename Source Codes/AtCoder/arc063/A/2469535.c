#include <stdio.h>

char str[100000];
char before;

int main() {
  int i;
  int cnt = 0;

  scanf("%s", str);
  before = str[0];
  
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] != before) cnt++;
    before = str[i];
  }

  printf("%d\n", cnt);
  return 0;
} 