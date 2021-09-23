#include <stdio.h>
#include <stdlib.h>

int main(void){
  int xa,ya,xb,yb,xc,yc;
  scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);

  xb -= xa;
  yb -= ya;
  xc -= xa;
  yc -= ya;

  printf("%.5lf\n",(double)abs(xb*yc-yb*xc)/2);

  return 0;
} 