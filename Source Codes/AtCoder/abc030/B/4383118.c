#include <stdio.h>
#include <math.h>

int main(void){
  double n,m;
  scanf("%lf%lf",&n,&m);

  if(n > 12) n -= 12;
  n += m/60;
  n *= 5;

  double ans = fabs(n-m)*6;
  if(ans > 180) ans = 360-ans;
  printf("%lf\n",ans);
  
  return 0;
} 