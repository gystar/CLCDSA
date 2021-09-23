#include <stdio.h>
#include <string.h>
int main() {
  char input[11];
  scanf("%s", input);
  int i; /* index */
  int count = 0;
  int ans = 0;
  for (i = 0; i < 11; ++i) {
    if (input[i] == 'A' || input[i] == 'T' || input[i] == 'C' || input[i] == 'G') {
      ++count;
    } else {
      if (count > ans) {
        ans = count;
        count = 0;
      } else {
        count = 0;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
} 