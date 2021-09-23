#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int n,k,x,y,i,sum=0;
  scanf("%d%d%d%d",&n,&k,&x,&y);
  for(i=1;i<=n;i++){
    if(i>k) sum+=y;
    else sum+=x;
  }
  printf("%d",sum);
  return 0;
} 