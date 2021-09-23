#include<stdio.h>
int main(void){
	
	int N,A[100],i;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
	scanf("%d",&A[i]);
	}
	int max=A[0],min=A[0];
	
	
	for(i=0;i<N;i++){
		
		if(max<A[i]){
			max=A[i];
		}
		
		if(min>A[i]){
			min=A[i];
		}
	}
	
	printf("\n%d\n\n",max-min);
	
	
	return 0;
} 