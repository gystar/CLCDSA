#include <stdio.h>

int N;
char S[300][301];

int main(void) {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%s", S[i]);
    // printf("%s\n", S[i]);
  }

  int ans = 0;
  for (int k = 0; k < N; ++k) {
    int ok = 1;
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        ok &= S[(i+k)%N][j] == S[(j+k)%N][i];
      }
      if (!ok)
        break;
    }
    if (ok)
      ++ans;
  }
  ans *= N;
  printf("%d\n", ans);
} 