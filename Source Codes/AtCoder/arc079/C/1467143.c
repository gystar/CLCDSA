#include<stdio.h>
int main(){
  long long n,d[100],a=0,s,i,j;
  scanf("%lld",&n);
  for(i=0;i<n;i++)scanf("%lld",&d[i]);
  while(1){
    for(j=s=0;j<n;j++){
      s+=d[j]/n;
      d[j]=d[j]%n-d[j]/n;;
    }//printf("%lld\n",s);
    if(s==0)break;
    for(j=0;j<n;j++)d[j]+=s;
    a+=s;
  }
  printf("%lld\n",a);
  return 0;
} 