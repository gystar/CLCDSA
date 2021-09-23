#include <stdio.h>
#include <string.h>
int main() {
  int input;
  scanf("%d",&input);
  if (input == 3 || input == 5 || input == 7) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
} 