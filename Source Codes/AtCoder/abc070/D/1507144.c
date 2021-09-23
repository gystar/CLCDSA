#include<stdio.h>
int main(){
  long long n,i,a,b,c,d[100010],f[100010]={};
  int ta[100010],co[200010],nt[200010],to[200010],t,r,m,q[100010];
  scanf("%lld",&n);
  for(i=0;i<n;i++)ta[i+1]=-1;
  for(i=0;i<n-1;i++){
    scanf("%lld %lld %lld",&a,&b,&c);
    to[i]=b;
    co[i]=c;
    nt[i]=ta[a];
    ta[a]=i;
    to[i+n-1]=a;
    co[i+n-1]=c;
    nt[i+n-1]=ta[b];
    ta[b]=i+n-1;
  }
  scanf("%lld %d",&n,&m);
  f[q[0]=m]=1;
  d[m]=0;
  for(r=1;r-t;t++){
    for(i=ta[q[t]];i+1;i=nt[i]){
      if(f[to[i]])continue;
      d[to[i]]=d[q[t]]+co[i];
      f[q[r++]=to[i]]=1;
    }
  }
  for(i=0;i<n;i++){
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",d[a]+d[b]);
  }
  return 0;
} 