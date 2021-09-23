#include <stdio.h>

int main(void){
  long H,W;
  scanf("%ld%ld",&H,&W);

  if(H*3 == W*4) printf("4:3\n");
  else printf("16:9\n");

  return 0;
} 