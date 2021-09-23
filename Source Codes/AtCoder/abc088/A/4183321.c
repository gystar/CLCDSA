#include <stdio.h>

int main(void){
  long N;
  int A;
  scanf("%ld%d",&N,&A);

  if(N%500 <= A){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
} 