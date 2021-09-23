#include <stdio.h>

int main(void){
  int N,M,K,A,res=0;
  int cnt[31]={};
  scanf("%d %d",&N,&M);
  
  for(int i=0;i<N;i++){
    scanf("%d",&K);
    for(int j=0;j<K;j++){
      scanf("%d",&A);
      cnt[A-1]++;
    }
  }
  
  for(int i=0;i<M;i++) if(cnt[i]==N) res++;
  printf("%d\n",res);
  return 0;
} 