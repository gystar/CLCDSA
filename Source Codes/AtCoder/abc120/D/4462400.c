#include<stdio.h>
#define N 100001
int p[N];int r[N];int f(int x){if(p[x]==x){return x;}return p[x]=f(p[x]);}int u(int x,int y){x=f(x);y=f(y);if(r[x]<r[y]){p[x]=y;r[y]+=r[x];}else {p[y]=x;r[x]+=r[y];}}int main(){long n,m,i,b[N],a[N][2];scanf("%ld%ld",&n,&m);for(i=0;i<m;i++)scanf("%d%d",&a[i][0],&a[i][1]);b[m]=(long long)n*(n-1)/2;for(i=0;i<N;i++){p[i]=i;r[i]=1;};for(i=m-1;i>=0;i--){if(f(a[i][0])==f(a[i][1]))b[i]=b[i+1];else{b[i]=b[i+1]-(long)r[f(a[i][0])]*r[f(a[i][1])];u(a[i][0],a[i][1]);}}for(i=1;i<=m;i++)printf("%ld\n",b[i]);return 0;} 