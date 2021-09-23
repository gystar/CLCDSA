#include<stdio.h>
#include<math.h>

int main(){
  int i,j,k=0;
  int N,K;
  scanf("%d",&N);
  scanf("%d",&K);
  
  int A[N];
  
  for(i=0;i<N;i++){
    scanf("%d ",&A[i]);
  }
  
  for(i=0;i<N;i++){
    if(A[i] > abs(A[i]-K)){
      k+=abs(A[i]-K)*2;
    }
    else
      k+=A[i]*2;
  }
  
  printf("%d\n",k);
  return 0;
} 