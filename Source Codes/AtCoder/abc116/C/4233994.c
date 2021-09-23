#include<stdio.h>

int main(void){
  int n,i,ans=0;
  scanf("%d",&n);
  int h[n];
  for(i=0;i<n;i++){
    scanf("%d",&h[i]);
  }
  ans+=h[0];
  for(i=0;i<n-1;i++){
    if(h[i+1]>h[i]) ans+=h[i+1]-h[i];
  }
  printf("%d\n",ans);
  return 0;
} 