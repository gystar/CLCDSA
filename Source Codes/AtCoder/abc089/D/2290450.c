#include<stdio.h>
#include<stdlib.h>
int main(){
  int h,w,i,j,k,a,y[200010],x[200010],d[200010]={};
  scanf("%d %d %d",&h,&w,&k);
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      scanf("%d",&a);
      y[a]=i;
      x[a]=j;
    }
  }
  for(i=1;i<=h*w;i++)d[i+k]=d[i]+abs(x[i]-x[i+k])+abs(y[i]-y[i+k]);
  scanf("%d",&k);
  while(k--){
    scanf("%d %d",&i,&j);
    printf("%d\n",d[j]-d[i]);
  }
  return 0;
} 