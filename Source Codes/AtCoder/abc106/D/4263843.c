#include <stdio.h>

int main(void){
  int N,M,Q;
  scanf("%d%d%d",&N,&M,&Q);

  int L,R;
  int sum[N+1][N+1];
  for(int i = 0;i <= N;i++){
    for(int j = 0;j <= N;j++){
      sum[i][j] = 0;
    }
  }
  for(int i = 0;i < M;i++){
    scanf("%d%d",&L,&R);
    sum[L][R]++;
  }
  for(int i = 1;i <= N;i++){
    for(int j = 1;j <= N;j++){
      sum[i][j] += sum[i][j-1];
    }
  }
  int p,q;
  for(int i = 0;i < Q;i++){
    scanf("%d%d",&p,&q);
    int ans = 0;
    for(int i = p;i <= q;i++){
      ans += sum[i][q]-sum[i][p-1];
    }
    printf("%d\n",ans);
  }

  return 0;
} 