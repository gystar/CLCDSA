#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void){
  int n,t,a,h;
  int tmpr,ans=1;
  scanf("%d%d%d",&n,&t,&a);
  int min=999999;
  for(int i=1;i<=n;i++){
    scanf("%d",&h);
    tmpr=(t*1000-h*6)-a*1000;
    if(tmpr<0) tmpr=-tmpr;
    if(min>tmpr) {ans=i;min=tmpr;}
  }
  printf("%d",ans);
  return 0;
} 