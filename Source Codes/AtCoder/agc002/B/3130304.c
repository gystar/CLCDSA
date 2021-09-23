#include<stdio.h>

int main(){
  int n,m,x,y,f[100010]={},cnt[100010],ans=0;
  scanf("%d %d",&n,&m);
  f[1]=1;
  for(int i=1;i<=n;i++)
    cnt[i]=1;
  for(int i=0;i<m;i++){
    scanf("%d %d",&x,&y);
    if(f[x]==1)
      f[y]=1;
    if(cnt[x]==1)
      f[x]=0;
    cnt[x]--;
    cnt[y]++;
  }
  for(int i=1;i<=n;i++)
    ans+=f[i];
  printf("%d\n",ans);
} 