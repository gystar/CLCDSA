#include <stdio.h>

int main(void){
  int n,i,ans,cnt,tmp;
  scanf("%d",&n);
  ans = n;
  
  for(i=0;i<=n;i++){
    cnt=0;
    tmp=i;
    while(tmp){
      cnt+=tmp%6;
      tmp/=6;
    }
    tmp=n-i;
    while(tmp){
      cnt+=tmp%9;
      tmp/=9;
    }
    if(ans>cnt) ans=cnt;
  }

  printf("%d\n",ans);
  return 0;
} 