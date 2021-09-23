#include<stdio.h>
#include<math.h>

int main(){
  long long x,y;
  scanf("%lld%lld",&x,&y);
  long long ans=0;
  while(y>=x){
    x=x*2;
    ans++;
  }
  printf("%lld\n",ans);
  return 0;
} 