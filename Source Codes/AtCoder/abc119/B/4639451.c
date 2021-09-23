#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int i;
  double ans = 0;
  for(i=0;i<n;i++){
    double x;
    char u[4];
    scanf("%lf%s",&x,u);
    if(u[0] == 'J'){
      ans += x;
    }else{
      ans += x * 380000.0;
    }
  }
  printf("%lf\n", ans);
  return 0;
} 