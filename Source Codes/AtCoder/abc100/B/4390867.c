#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(void){
  int d,n;
  scanf("%d%d",&d,&n);
  switch(d){
    case 0:
      if(n==100) printf("101");
      else printf("%d",n);
      break;
    case 1:
      if(n==100) printf("%d",101*n);
      else printf("%d",n*100);
      break;
    case 2:
      if(n==100) printf("%d",10100*n);
      else printf("%d",n*10000);
      break;
  }
  return 0;
} 