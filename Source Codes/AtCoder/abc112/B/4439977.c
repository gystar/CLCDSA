#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main(){
  int n,T,i,ans=1001;
  scanf("%d%d",&n,&T);
  int c[n],t[n];
  for(i=0;i<n;i++)scanf("%d%d",&c[i],&t[i]);
  for(i=0;i<n;i++) if(t[i]<=T)ans=min(ans,c[i]);
  if(ans==1001)printf("TLE");
  else printf("%d",ans);
} 