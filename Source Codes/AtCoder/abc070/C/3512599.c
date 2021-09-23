#include <stdio.h>
long long lcm(long long a,long long b){
    if(a<b){
        long long tmp;
    tmp = a;
    a = b;
    b = tmp;
  }
  long long inia=a,r;
  long long inib=b;
    r = a % b;
      while(r!=0){
        a = b;
        b = r;
        r = a % b;
      }
      inia/=b;
      return (inia*inib);

}
int main(){
  long long n,i,t[101];
  scanf("%lld",&n);
  for(i=0;i<n;i++){
      scanf("%lld",&t[i]);
  }
  long long ans=t[0];
  for(i=0;i<n;i++){
      ans=lcm(ans,t[i]);
  }
  printf("%lld",ans);
  return 0;
} 