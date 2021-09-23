#include <stdio.h>
int main(){
  int a,ans=111;
  scanf("%d",&a);
  while(ans<a)ans+=111;
  printf("%d",ans);
} 