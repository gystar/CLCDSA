#include<stdio.h>

int main(){
  int i,j,k=0;
  int N;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++){
    scanf("%d ",&A[i]);
    if(A[i]%2 == 1){
      puts("0");
      return 0;
    }
  }
  
  while(1){
    for(i=0;i<N;i++){
      if(A[i] %2 == 1){
        printf("%d\n",k);
        return 0;
      }
      A[i] /=2;
    }
    k++;
  }
  
  return 0;
} 