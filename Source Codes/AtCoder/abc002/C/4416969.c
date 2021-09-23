#include<stdio.h>
#include<stdlib.h>

int main(){
  int x[9],i=0;
  for(;i<6;i++) scanf("%d",&x[i]);
  double s= abs( (x[2]-x[0])*(x[5]-x[1]) - (x[3]-x[1])*(x[4]-x[0]));
  printf("%lf",s/2);
} 