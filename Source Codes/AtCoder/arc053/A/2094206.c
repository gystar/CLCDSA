#include <stdio.h>
int main(void){
  int h,w,ans=0;
  scanf("%d %d",&h,&w);
  ans+=(w-1)*h;
  ans+=w*(h-1);
  printf("%d\n",ans);
  return 0;
} 