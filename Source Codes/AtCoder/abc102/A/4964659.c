#include <stdio.h>

int main(){
	double a;
  scanf("%lf",&a);
  if((int)a%2==0) printf("%.0f\n",a);
  else printf("%.0f\n",a*2);
  return 0;
} 