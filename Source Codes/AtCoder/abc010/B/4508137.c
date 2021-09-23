#include<stdio.h>

int main(void){
  int n,i,cnt,ans=0;
  scanf("%d",&n);
  int a[n+1];
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++){
    cnt=0;
    while(!((a[i]-2)%3!=0 && a[i]%2!=0)){
      a[i]-=1;
      cnt++;
    }
    ans+=cnt;
  }
  printf("%d\n",ans);
  return 0;
} 