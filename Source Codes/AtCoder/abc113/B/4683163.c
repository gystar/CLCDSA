#include <stdio.h>
#include <math.h>

int main() {
  int N;
  double T,A;
  scanf("%d",&N);
  scanf("%lf %lf",&T,&A);
  int p=1;
  double min;
  for (int i = 0; i < N; i++) {
    int hight;
    double dif;
    if (i == 0) {
      scanf("%d",&hight);
      min=fabs((T-(double)hight*0.006)-A);
    }
    else {
      scanf("%d",&hight);
      dif=fabs((T-(double)hight*0.006)-A);
      if (min > dif) {
        min = dif;
        p = i+1;
      }
    }
  }
  printf("%d\n",p);
  return 0;
} 