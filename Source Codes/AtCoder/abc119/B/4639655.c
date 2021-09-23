#include <stdio.h>

int main(){
  int n;
  double sum = 0.0;
  char a[40] = "JPY";
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    double x;
    char u[100];
    scanf("%lf %s",&x,u);
    if (u[0] == a[0]) {
      sum += x;
    }else{
      sum += x * 380000.0;
    }
  }
  printf("%lf\n",sum);
} 