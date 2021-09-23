#include<stdio.h>
int main() {
  int N;
  int p[10];
  int i; /* index */
  scanf("%d",&N);
  for (i = 0;i < N;++i) {
    scanf("%d",&p[i]);
  }
  int max = p[0];
  for (i = 0;i < N;++i) {
    if (max < p[i]) {
      max = p[i];
    }
  }
  int ans = 0;
  for (i = 0;i < N;++i) {
    ans	+= p[i];
  }
  ans =	ans - max + max	/ 2;
  printf("%d\n",ans);
  return 0;
} 