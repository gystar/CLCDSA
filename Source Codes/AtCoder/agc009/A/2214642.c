#include<stdio.h>
#include<math.h>

int main(){
  long long n;
  scanf("%lld",&n);
  long long a[n],b[n];
  for(int i=0;i<n;i++){
    scanf("%lld%lld",&a[i],&b[i]);
  }
  
  long long ans=0;

  for(long long i=n-1;i>=0;i--){
    
    while((a[i]+ans)%b[i]!=0){
      ans=ans+(b[i]-(a[i]+ans)%b[i]);
    }
  }

  printf("%lld\n",ans);

  return 0;
} 