#include <stdio.h>

int main(){
  int N,M,i,j;
  scanf("%d %d",&N,&M);
  if(M-2*N<0){
    printf("-1 -1 -1\n");
    return 0;
  }
  for(i=0;i<=(M-2*N)/2;i++){
    if(3*N+i-M>=0){
      printf("%d %d %d\n",3*N+i-M,M-2*N-2*i,i);
      return 0;
    }
  }
  printf("-1 -1 -1\n");
  return 0;
} 