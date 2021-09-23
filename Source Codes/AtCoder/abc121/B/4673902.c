#include <stdio.h>

int main() {
  int N,M,C;
  scanf("%d %d %d",&N,&M,&C);
  int A[N][M],B[M];
  for (int i = 0; i < M; i++) {
    scanf("%d",&B[i]);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d",&A[i][j]);
    }
  }
  int ans=0;
  for (int i = 0; i < N; i++) {
    int sum=0;
    for (int j = 0; j < M; j++) {
      sum += A[i][j]*B[j];
    }
    sum += C;
    if (sum > 0) ans++;
  }
  printf("%d\n",ans);
  return 0;
} 