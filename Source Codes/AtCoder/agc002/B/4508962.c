#include<stdio.h>
int main(){
  int n,m,i,x,y,a[100001]={1},b[100001]={};
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++) b[i]=1;
  for(i=0;i<m;i++){
    scanf("%d%d",&x,&y);
    if(a[x-1]==1){
      a[y-1]=1;
    }
    b[x-1]--;
    b[y-1]++;
    if(b[x-1]==0){
      a[x-1]=0;
    }
  }
  int ans=0;
  for(i=0;i<n;i++){
    ans+=a[i];
  }
  printf("%d",ans);
} 