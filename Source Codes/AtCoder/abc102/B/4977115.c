#include <stdio.h>

int main(void){
  int N,A,min=1000000010,max=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&A);
    if(A<min) min=A;
    if(A>max) max=A;
  }
  printf("%d\n",max-min);
  return 0;
} 