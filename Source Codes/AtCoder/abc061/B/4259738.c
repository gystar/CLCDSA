#include <stdio.h>
int main(void){
  int n,m,i;
  int a[50],b[50],road[50]={0};
  scanf("%d%d",&n,&m);
  for(i=1;i<=m;i++){
    scanf("%d %d",&a[i],&b[i]);
    road[a[i]]++;
    road[b[i]]++;
  }
  for(i=1;i<=n;i++){
    printf("%d\n",road[i]);
  }
  return 0;
} 