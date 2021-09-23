#include <stdio.h>
int main() {
  int N,M;
  scanf("%d %d", &N, &M);
  int K;
  int i,j; /*index of matrix or array */
  int count[31] = {0};

  for (i = 0; i < N; ++i) {
    scanf("%d",&K);
    for (j = 0; j < K; ++j) {
      int A;
      scanf("%d", &A);
      --A;
      ++count[A];
    }
  }

  int ans = 0;
  for (i = 0; i < M; ++i) {
    if (count[i] == N) {
      ++ans;
    }
  }

  printf("%d\n",ans);
  return 0;
} 