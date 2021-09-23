#include<stdio.h>

int main(){
  int N,K,X,Y;
  scanf("%d %d %d %d",&N,&K,&X,&Y);
  if(N <= K) printf("%d",N*X);
  else printf("%d",K*X+(N-K)*Y);
} 