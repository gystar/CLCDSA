#include <stdio.h>

int main()  {
  int age;
  scanf("%d", &age);
  switch(age) {
    case 3:
    case 5:
    case 7:
      printf("YES\n");
      break;
    default:
      printf("NO\n");
  }
  return 0;
} 