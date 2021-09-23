#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k;
  int N,M,max=0;
  
  scanf("%d",&N);
  char B[N][20];
  for(i=0;i<N;i++)
    scanf("%s",B[i]);
  
  scanf("%d",&M);
  char R[M][20];
  for(i=0;i<M;i++)
    scanf("%s",R[i]);
  
  for(i=0;i<N;i++){
    k=0;
    for(j=0;j<N;j++){
      if(strcmp(B[i],B[j])==0)
        k++;
    }
    for(j=0;j<M;j++){
      if(strcmp(B[i],R[j])==0)
        k--;
    }
    if(max < k)
      max = k;
    
  }
  
  printf("%d\n",max);
  return 0;
} 