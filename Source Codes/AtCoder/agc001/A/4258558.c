#include<stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int L[2*N];
  int i,j,k,tmp,x=0;
  for(i=0;i<2*N;i++)
  scanf("%d ",&L[i]);
  
  for (i=0; i<2*N; ++i) {
    for (j=i+1; j<2*N; ++j) {
      if (L[i] > L[j]) {
        tmp =  L[i];
        L[i] = L[j];
        L[j] = tmp;
      }
    }
  }
  
  for(i=0;i<2 * N;i+=2){
    x += L[i];
  }
  
  printf("%d\n",x);
  
  return 0;
} 