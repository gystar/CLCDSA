#include<stdio.h>
long long n,a[111111],b[111111],ans=0;
int main(){
  scanf("%lld",&n);
  for(int i=0;i<n;i++){
    scanf("%lld%lld",&a[i],&b[i]);
    a[i]%=b[i];
  }
  for(int i=n-1;i>=0;i--){
    a[i]=(a[i]+ans)%b[i];
    if(a[i]>0){
      ans+=b[i]-a[i];
    }
  }
  printf("%lld\n",ans);
} 