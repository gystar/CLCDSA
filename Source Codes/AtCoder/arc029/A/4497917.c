#include <stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  int niku[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &niku[i]);
  }
  int tmp;
  for (int i=0; i<N; ++i) {
    for (int j=i+1; j<N; ++j) {
      if (niku[i] < niku[j]) {
        tmp =  niku[i];
        niku[i] = niku[j];
        niku[j] = tmp;
      }
    }
  }
  int left = 0;
  int right = 0;
  for (int i = 0; i<N; i++) {
    if (left <= right) {
      left += niku[i];
    } else {
      right += niku[i];
    }
  }

  if (left <= right) {
    printf("%d", right);
  } else {
    printf("%d", left);
  }
  printf("\n");

} 