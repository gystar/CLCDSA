#include<stdio.h>

int main(){
  int i,j,k=0;
  int N;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
    scanf("%d ",&A[i]);
  int tmp;
  for (i=0; i<N; ++i) {
    for (j=i+1; j<N; ++j) {
      if (A[i] > A[j]) {
        tmp =  A[i];
        A[i] = A[j];
        A[j] = tmp;
      }
    }
  }
  
  for(i=0;i<N;i++){
    if(A[i] != A[i+1])
      k+=A[i];
  }
  
  printf("%d\n",A[N-1]-A[0]);
  return 0;
} 