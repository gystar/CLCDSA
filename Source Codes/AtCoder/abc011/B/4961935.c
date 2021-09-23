#include <stdio.h>

int main() {
  int i, difference = 'a' - 'A';
  char name[13];
  scanf("%s", name);
  if('a' <= name[0] && name[0] <= 'z') {
    name[0] -= difference;
  }

  for(i = 1; i < strlen(name); i++) {
    if('A' <= name[i] && name[i] <= 'Z') {
      name[i] += difference;
    }
  }

  printf("%s\n", name);
  return 0;
} 