#include<stdio.h>
#include<stdlib.h>

int main(){

  int i,j,k,tmp;
  int N,M,X,Y;
  scanf("%d %d %d %d",&N,&M,&X,&Y);
  int x[N],y[M];
  
  for(i=0;i<N;i++)
    scanf("%d ",&x[i]);
  
  for(i=0;i<M;i++)
    scanf("%d ",&y[i]);
  
  for (i=0; i<M; ++i) {
    for (j=i+1; j<M; ++j) {
      if (y[i] < y[j]) {
        tmp =  y[i];
        y[i] = y[j];
        y[j] = tmp;
      }
    }
  }
  
  for (i=0; i<N; ++i) {
    for (j=i+1; j<N; ++j) {
      if (x[i] > x[j]) {
        tmp =  x[i];
        x[i] = x[j];
        x[j] = tmp;
      }
    }
  }
  
  if(x[N-1] >= y[M-1]){
    puts("War");
  	return 0;
  }
 
  for(i= x[N-1]+1;i <= y[M-1];i++)
  if(i > X && i <= Y ){
    puts("No War");
    return 0;
  }
  
  puts("War");
  return 0;
} 