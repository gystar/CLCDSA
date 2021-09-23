#include<stdio.h>

int main(){
  double n,k;
  scanf("%lf%lf",&n,&k);

  double p,p1,p2,p3;

  p1 = (k-1.0)*(n-k)/(n*n*n)*6.0;
  p2 = (n-1.0)/(n*n*n)*3.0;
  p3 = 1/(n*n*n);

  //printf("p1=%f\np2=%f\nP3=%f\n",p1,p2,p3);

  p = p1 + p2 + p3;
  printf("%.20f\n",p);

  return 0;
} 