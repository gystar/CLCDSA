#include <stdio.h>
int main() {
  int N,K;
  scanf("%d %d",&N,&K);
  if (N % K == 0) {
    printf("0\n");
  } else {
    printf("1\n");
  }
} 