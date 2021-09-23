#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int T[N];
  int sum = 0;
  for(int i = 0;i < N;i++){
    scanf("%d",&T[i]);
    sum += T[i];
  }

  int M;
  scanf("%d",&M);

  int p,x;
  for(int i = 0;i < M;i++){
    scanf("%d%d",&p,&x);
    printf("%d\n",sum-T[p-1]+x);
  }

  return 0;
} 