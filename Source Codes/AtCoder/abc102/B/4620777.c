#include<stdio.h>
int main(void){
  int N,i,j;
  int A[100]={0};
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
      if(A[i]<A[j]){
    	int t=A[i];
    	A[i]=A[j];
    	A[j]=t;
  		}
    }
  }
  printf("%d\n",A[0]-A[N-1]);
  return 0;
} 