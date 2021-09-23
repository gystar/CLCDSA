#include <stdio.h>

int main(void){
  int x,y;
  scanf("%d%d",&x,&y);

  if(x < y) printf("Better\n");
  else printf("Worse\n");

  return 0;
} 