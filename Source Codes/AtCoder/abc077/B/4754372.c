#include <stdio.h>

int main(){
  double N,i = 0;
  scanf("%lf",&N);
  for (i=0;i<100000;i++){
    if(N < i*i) break;
  }
  printf("%.0f\n",(i-1)*(i-1));
  return 0;
} 