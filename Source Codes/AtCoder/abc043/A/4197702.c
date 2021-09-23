#include<stdio.h>
int main(void){
	int N,a=0;
  	scanf("%d",&N);
  	for(int i=1;i<N+1;i++){
    	a+=i;
    }
  printf("%d\n",a);
  return 0;
} 