#include <stdio.h>
#include <math.h>

int main(void){
  double xa, ya, xb, yb, xc, yc;
  double ans;
  scanf("%lf %lf %lf %lf %lf %lf",&xa, &ya, &xb, &yb, &xc, &yc);
  xa -= xc;
  ya -= yc;
  xb -= xc;
  yb -= yc;
  ans = fabs(xa*yb-xb*ya)/2;
  printf("%lf\n",ans);
  return 0;
} 