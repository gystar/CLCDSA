#include<stdio.h>
int main(void){
  int N;
  scanf("%d",&N);
  if(N%2!=0){
    printf("%d\n",2*N);
  }else{
    printf("%d\n",N);
  }
  return 0;
} 