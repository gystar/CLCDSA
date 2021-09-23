#include <stdio.h>
#include <string.h>

int main(void) {
  int e[6], l[6];
  int b, count, i, j, flag;
  for (i = 0; i < 6; i++) {
    scanf("%d", e + i);
  }
  scanf("%d", &b);
  for (i = 0; i < 6; i++) {
    scanf("%d", l + i);
  }
  count = 0;
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (l[i] == e[j]) count++;
    }
  }
  flag = 0;
  for (i = 0; i < 6; i++) {
    if (l[i] == b) flag = 1;
  }
  if (count == 6) puts("1");
  else if (count == 5 && flag) puts("2");
  else if (count == 5) puts("3");
  else if (count == 4) puts("4");
  else if (count == 3) puts("5");
  else puts("0");
  return 0;
} 