#include<stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define INF 2000000

int main(){
  int n,i,ans=INF;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    int tmp=n%i;
    tmp+=abs((n-tmp)/i-i);
    ans=min(ans,tmp);
  }
  printf("%d\n",ans);
  return 0;
} 