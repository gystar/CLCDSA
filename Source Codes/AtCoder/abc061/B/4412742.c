#include<stdio.h>

int main(){
  int i,j,k;
  int N,M;
  
  scanf("%d %d",&N,&M);
  
  int A[2*M];
  
  for(i=0;i<2*M;i+=2)
    scanf("%d %d",&A[i],&A[i+1]);
  
  int B[N+1];
  for(i=1;i<=N;i++)
    B[i]=0;
  
  for(i=0;i<2*M;i++){
    B[A[i]]++;
  }
  
  for(i=1;i<=N;i++){
    printf("%d\n",B[i]);
  }
  
  return 0;
} 