#include<stdio.h>

int main(void){
  int a,b,i,n,ans=0;
  scanf("%d %d",&a,&b);
  n = b-a;
  for(i=0;i<n;i++){
    ans+=i;
  }
  ans = ans-a;
  printf("%d\n",ans);
  
  return 0;
} 