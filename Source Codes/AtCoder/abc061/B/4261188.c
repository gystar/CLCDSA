#include <stdio.h>

int main(void){
  int N,M,a;
  scanf("%d%d",&N,&M);

  int cnt[N];
  for(int i = 0;i < N;i++) cnt[i] = 0;

  for(int i = 0;i < 2*M;i++){
    scanf("%d",&a);
    cnt[a-1]++;
  }

  for(int i = 0;i < N;i++) printf("%d\n",cnt[i]);


  return 0;
} 