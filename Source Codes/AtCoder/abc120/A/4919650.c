#include <stdio.h>

int main(){
  int A, B, C;
  int count;
  scanf("%d %d %d",&A,&B,&C);
  
  if(A * C <= B){
    count = C;
  }else{
    count = B / A;
  }

  printf("%d",count);

  return 0;
} 