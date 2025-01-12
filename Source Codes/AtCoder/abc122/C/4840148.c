#include <stdio.h>
#include <string.h>
int main(void) {
  int N;
  int Q;
  char string[100001];
  int l[100001];
  int r[100001];
  int i; /* index */

  scanf("%d %d", &N, &Q);
  scanf("%s", string);
  for (i = 0; i < Q; ++i) {
      scanf("%d %d", &l[i], &r[i]);
  }

  int count_ans[100001];
  int count = 0;
  for (i = 0; i < N; ++i) {
    if (string[i] == 'A' && string[i+1] == 'C') {
      ++count;
    }
    count_ans[i] = count;
  }

  for(i = 0; i < Q; ++i) {
    if (l[i] != 1) {
      printf("%d\n", count_ans[r[i] - 2] - count_ans[l[i] - 2]);
    } else {
      printf("%d\n", count_ans[r[i] - 2]);
    }
  }
  return 0;
} 