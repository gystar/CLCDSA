#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int N,K,X,Y;
  scanf("%d%d%d%d",&N,&K,&X,&Y);

  printf("%d\n",min(N,K)*X+max(N-K,0)*Y);

  return 0;
} 