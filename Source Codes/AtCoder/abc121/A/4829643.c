#include<stdio.h>
int main(void){
  int H;
  int W;
  int h;
  int w;
  scanf("%d%d",&H,&W);
  scanf("%d%d",&h,&w);
  int ans=(H-h)*(W-w);
  printf("%d\n",ans);
  return 0;
} 