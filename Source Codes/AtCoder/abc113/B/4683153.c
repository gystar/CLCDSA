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
      //printf("%d %lf\n",hight,min);
    }
    else {
      scanf("%d",&hight);
      //printf("%d %lf %lf\n",hight,T,A);
      //printf("%lf\n",fabs(T-(double)hight*0.006)-A);
      dif=fabs((T-(double)hight*0.006)-A);
      //printf("%d %lf\n",hight,dif);
      if (min > dif) {
        min = dif;
        p = i+1;
      }
    }
  }
  printf("%d\n",p);
  return 0;
} 