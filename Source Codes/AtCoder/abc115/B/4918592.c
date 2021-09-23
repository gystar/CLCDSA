#include <stdio.h>

int main(void){
  int N, p, sum=0, max=0;
  int i;
  
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&p);
    sum+=p;
    if(p>max) max=p;
  }
  printf("%d\n",sum-max/2);
  return 0;
} 