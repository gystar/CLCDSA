#include <stdio.h>

int main(void) {
  char s[100001];
  int N , Q;
  int l, r;
  int AC[100001] = {0}, count = 0;
  int i;

  scanf("%d %d", &N, &Q);
  scanf("%s", s);

  for(i = 0; s[i] != '\0'; ++i) {
    if(s[i] == 'A') {
      if(s[i + 1] == 'C') {
        ++count;
      }
    }
    AC[i] = count;
  }

  for(i = 0; i < Q; ++i) {
    scanf("%d %d", &l, &r);
    if(l == 1)  printf("%d\n", AC[r - 2]);
    else  printf("%d\n", AC[r - 2] - AC[l - 2]);
  }

  return 0;
} 