#include <stdio.h>

int main(void){
  int N,i;
  scanf("%d",&N);
  for(i=N;i<1000;i++){
    if(i%111==0) break;
  }
  printf("%d\n",i);
  return 0;
} 