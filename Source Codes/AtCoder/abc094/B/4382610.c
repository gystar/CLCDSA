#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int n,m,x,i;
  int a[1000],cost[1000]={0};
  scanf("%d%d%d",&n,&m,&x);
  for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    cost[a[i]]=1;
  }
  int ans=0,ans2=0;
  for(i=x;i>0;i--){
    if(cost[i]==1) ans++;
  }
  for(i=x;i<n;i++){
    if(cost[i]==1) ans2++;
  }
  ans=fmin(ans,ans2);
  printf("%d",ans);
  return 0;
} 