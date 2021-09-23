#include<stdio.h>

int main(void){
  int n,k,i,ans=1;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++){
    if(ans<k) ans*=2;
    else ans+=k;
  }
  printf("%d\n",ans);
  return 0;
} 