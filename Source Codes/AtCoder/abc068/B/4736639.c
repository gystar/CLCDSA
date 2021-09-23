#include<stdio.h>
int main(void){
	
	int k=1,ninoinsi=0,N;
	scanf("%d",&N);
	
	while(N>=k){
		k=k*2;
		ninoinsi++;
	}
		
	printf("\n%d\n\n",k/2);
	
	
	return 0;
} 