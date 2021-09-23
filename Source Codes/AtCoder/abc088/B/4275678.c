#include<stdio.h>

int main(){

  int i,j,k;
  int N;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++){
    scanf("%d ",&A[i]);
  }
  int tmp,Bob=0,Alice=0;
  for (i=0; i<N; ++i) {
    for (j=i+1; j<N; ++j) {
      if (A[i] < A[j]) {
        tmp =  A[i];
        A[i] = A[j];
        A[j] = tmp;
      }
    }
  }
  
  for(i=0;i<N;i++){
    if(i==0||i%2==0)
      Alice += A[i];
    else 
      Bob += A[i];
  }
  
  printf("%d\n",Alice-Bob);
  return 0;} 