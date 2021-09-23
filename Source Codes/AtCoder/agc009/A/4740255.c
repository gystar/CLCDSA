#include <stdio.h>

int main(void) {
  int i, j, N;
  long long A[100010], B[100010], C[100010]={0}, D;
  scanf("%d", &N);
  for (i=0;i<N;i++) scanf("%lld%lld", &A[i], &B[i]);
  for (i=N-1;i>=0;i--) {
    if (A[i]%B[i]) C[i] = B[i] - (A[i]%B[i]);
    else C[i] = C[i+1];
    if (C[i] < C[i+1]) {
        if ((C[i]%B[i]) - (C[i+1]%B[i]) >= 0) 
        C[i] = C[i+1] + (C[i]%B[i]) - (C[i+1]%B[i]);
        else C[i] = C[i+1] + (C[i]%B[i]) - (C[i+1]%B[i]) + B[i];
    }
  }
  printf("%lld\n", C[0]);
  return 0;
} 