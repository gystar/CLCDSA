#include <stdio.h>
 
int main(){
  double i,N,sum=0;
	scanf("%lf",&N);
  for(i=1;i<=N;i++){
  	sum += 1/N*i*10000; 
  }
  printf("%.0f\n",sum);
} 