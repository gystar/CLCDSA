#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  double n,x,sum=0,cnt=0;
  scanf("%lf",&n);
  for(int i=0; i<n; i++) {
    scanf("%lf",&x);
    if(x!=0) {
      sum+=x;
      cnt++;
    }
  }
  printf("%.lf\n",ceil(sum/cnt));
  return 0;
} 