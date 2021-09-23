#include<stdio.h>
int main(){
  int n,d[100010];
  long long i,r=0,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&d[i]);
  d[n]=d[n+1]=-1;
  for(i=0;i<n;i++){
    while(d[r]<d[r+1]||i>r)r++;//printf("%lld %lld\n",i,r);
    s+=(r-i+1);
  }
  printf("%lld\n",s);
  return 0;
} 