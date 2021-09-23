#include <stdio.h>

const int H = 50, W = 100;

void f(const char fore, const char back, const int n) {
  int cnt = 0;
  for (int i = 0; i < H; ++i) {
    char s[100];
    for (int j = 0; j < W; ++j) {
      char c = back;
      if (i & 1 != 0 && j & 1 != 0) {
        if (++cnt < n)
          c = fore;
      }
      s[j] = c;
    }
    puts(s);
  }
}

int main(void) {
  int A, B;
  scanf("%d%d", &A, &B);
  printf("%d %d\n", H*2, W);

  f('.', '#', A);
  f('#', '.', B);

  return 0;
} 