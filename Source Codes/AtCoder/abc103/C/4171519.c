#include<stdio.h>

int main(void){
  int n,i,ans=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    ans += a[i]-1;
  }
  printf("%d\n",ans);
  return 0;
} 