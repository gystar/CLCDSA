#include <stdio.h>

int main(void){
  int N,i;
  scanf("%d",&N);
  for(i=N;i<1000;i++){
    if(i/100 == i%100/10 && i%100/10==i%10) break;
  }
  printf("%d\n",i);
  return 0;
} 