#include <stdio.h>

int main(void){
  long X,Y,Z;
  scanf("%ld%ld%ld",&X,&Y,&Z);

  long ans = 0;

  while(Z+(Y+Z)*ans <= X){
    ans++;
  }

  printf("%ld\n",ans-1);
  return 0;
} 