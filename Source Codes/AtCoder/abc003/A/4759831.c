#include<stdio.h>

int main(void){
  int n,i;
  scanf("%d",&n);
	double sum=0;
  for(i=1;i<n+1;i++){
      sum=sum+i*10000.0/n;
  }
    printf("%lf",sum);
	printf("\n");
  return 0;
 } 