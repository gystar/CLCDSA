#include <stdio.h>
#include <math.h>
int main(void){
  double n;
  scanf("%lf",&n);
  int i;
  for(i=1;;i++){
    if(i*i>n){
      printf("%d",(i-1)*(i-1));
      return 0;
    }
  }
  return 0;
} 