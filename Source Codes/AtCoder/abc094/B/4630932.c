#include <stdio.h>
#include <math.h>
int main(void){
  int n,m,x,i;
  int a[110],cost[110]={0},sum1=0,sum2=0;
  scanf("%d%d%d",&n,&m,&x);
  for(i=0;i<m;i++) {
    scanf("%d",&a[i]);
    cost[a[i]]=1;
  }
  for(i=x;i<n;i++){
    if(cost[i]==1) sum1++;
  }
  for(i=x;i>0;i--){
    if(cost[i]==1) sum2++;
  }
  int ans=fmin(sum2,sum1);
  printf("%d\n",ans);
  return 0;
} 