#include<stdio.h>

int main(){
  int K,N;
  scanf("%d",&N);
  scanf("%d",&K);
  
  int i,j,k=1;
  
  for(i=0;i<N;i++){
    if(k*2 < k + K)
      k *= 2;
    else
      k +=K;
  }
  
  printf("%d\n",k);
  return 0;
} 