#include <stdio.h>
#include <math.h>
int main(void){
  int n,k,sum=1,i;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    sum=fmin(sum*2,sum+k);
  }
  printf("%d",sum);
  return 0;
} 