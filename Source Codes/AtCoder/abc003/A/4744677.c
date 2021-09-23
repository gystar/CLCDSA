#include <stdio.h>

int main(){
  int a;
  double sum=0;
  scanf("%d", &a);
  
  for(int i=1; i<a+1; i++){
    sum += i*10000.0 / a;
  }
  printf("%lf", sum);
} 