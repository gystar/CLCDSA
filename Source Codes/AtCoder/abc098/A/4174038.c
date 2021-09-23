#include <stdio.h>

int main(void){
  int A,B;
  scanf("%d%d",&A,&B);

  long ans = A+B;
  if(ans < A-B){
    ans = A-B;
  }
  if(ans < A*B){
    ans = A*B;
  }

  printf("%ld",ans);
  return 0;
} 