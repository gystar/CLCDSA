#include<stdio.h>
#include<math.h>
 
int main(){
  int h,w,d,q,l,r,a[90001][2],b,i,j,k;
  long di[90001]={};
  scanf("%d %d %d",&h,&w,&d);
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      scanf("%d",&b);
      a[b][0]=i;
      a[b][1]=j;
    }
  }
  for(i=d+1;i<=w*h;i++){
    di[i]+=di[i-d]+abs(a[i][0]-a[i-d][0]);
    di[i]+=abs(a[i][1]-a[i-d][1]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d %d",&l,&r);
    printf("%ld\n",di[r]-di[l]);
  }
} 