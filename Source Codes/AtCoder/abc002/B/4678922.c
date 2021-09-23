#define LENGTH 31
#include <stdio.h>

int main() {
  char phrase[LENGTH], ans[LENGTH];
  int i, count = 0;
  scanf("%s", phrase);
  for(i = 0; i < LENGTH; i++) {
    if((phrase[i] != 'a') && (phrase[i] != 'i') && (phrase[i] != 'u') && (phrase[i] != 'e') && (phrase[i] != 'o')) {
      ans[count] = phrase[i];
      count++;
    }
  }
  printf("%s\n", ans);
  return 0;
} 