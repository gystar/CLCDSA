#include <stdio.h>
#include <math.h>
int main(void){
  int n,m,i,j,min,man,index;
  int a[50],b[50],c[50],d[50];
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++) scanf("%d%d",&a[i],&b[i]);
  for(i=0;i<m;i++) scanf("%d%d",&c[i],&d[i]);
  for(i=0;i<n;i++){
    index=1;
    min=abs(a[i]-c[0])+abs(b[i]-d[0]);
    for(j=1;j<m;j++){
      man=abs(a[i]-c[j])+abs(b[i]-d[j]);
      if(man<min) {min=man;index=j+1;}
    }
    printf("%d\n",index);
  }
  return 0;
} 