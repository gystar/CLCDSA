#include<stdio.h>
int main(){
  long n,a,b,ans;
  scanf("%d%ld%ld",&n,&a,&b);
  if(b<a) ans=0;
  else if(n==1){
    if(a!=b) ans=0;
    else ans=1;
  }
  else {
    ans=(n-2)*(b-a)+1;
  }
  printf("%ld",ans);
} 