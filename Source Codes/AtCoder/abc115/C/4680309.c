#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int main() {
  int N,K;
  scanf("%d %d",&N,&K);
  int hight[N];
  for (int i = 0; i < N; i++) {
    scanf("%d",&hight[i]);
  }
  qsort(hight,N,sizeof(int),compare_int);
  int min=hight[N-1];
  for (int i = 0; i < N-K+1; i++) {
    int dif = hight[i+K-1] - hight[i];
    if (min > dif) min = dif;
  }
  printf("%d\n",min);
  return 0;
} 