#include <stdio.h>

int main() {
  int month, day;
  scanf("%d", &month);
  scanf("%d", &day);
  (month % day == 0)? printf("YES\n") : printf("NO\n");
  return 0;
} 