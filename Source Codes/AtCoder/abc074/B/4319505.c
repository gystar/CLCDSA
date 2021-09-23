#include <stdio.h>
#include <math.h>
int main(void){
  int i,n,k,sum=0;
  int dis;
  int x[100];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
    dis=fmin(x[i],abs(x[i]-k));
    sum+=dis;
  }
  printf("%d",sum*2);
  return 0;
} 