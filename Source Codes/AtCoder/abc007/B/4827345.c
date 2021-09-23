#include <stdio.h>

int main() {
  char target_str[12];
  scanf("%s", target_str);
  if(strcmp(target_str, "a") == 0) {
    printf("-1\n");
  } else {
    printf("a\n");
  }
  return 0;
} 