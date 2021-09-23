#include<stdio.h>

int main(void){
  int i,n;
  long int ans=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    ans=i*ans%1000000007;
  }
  printf("%ld",ans);
  return 0;
} 