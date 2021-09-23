#include<stdio.h>
int main(){
  double n,m;
  scanf("%lf%lf",&n,&m);
  n=fabs((n-12*(n>12)+m/60)*5-m)*6;
  printf("%lf\n",n>180?360-n:n);
} 