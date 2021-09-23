#include <stdio.h>
int main(void){
  int cheapest, m, n, x, i;
  scanf("%d%d",&n,&x);
  for(i=0;i<n;i++){
    scanf("%d",&m);
    if(cheapest==0||m<cheapest)cheapest=m;
    x-=m;
  }
  printf("%d",n+x/cheapest);
} 