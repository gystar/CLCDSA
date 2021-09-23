#include <stdio.h>

int main(void)
{
  int N, M, K_i, sum[30], A_j, result;
  int i, j;
  
  // ?????????
  scanf("%d %d", &N, &M);
  result = 0;
  for(i = 0; i < 30; i++)
  {
    sum[i] = 0;
  }
  
  // ???????????????????
  for(i = 0; i < N; i++)
  {
    scanf("%d", &K_i);
    for(j = 0; j < K_i; j++){
      scanf("%d", &A_j);
      sum[A_j - 1]++;
    }
  }
  
  // ????????????????????????
  for(i = 0; i < M; i++)
  {
    if(sum[i] == N) result++;
  }
  
  printf("%d", result);
  
  return 0;
} 