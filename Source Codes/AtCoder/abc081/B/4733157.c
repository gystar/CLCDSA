#include<stdio.h>
int main(void){
	
	int N,A[200],kaisuu,i,ninoinsi[200];
	scanf("%d",&N);
	
	
	for(i=0;i<N;i++){
	scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		ninoinsi[i]=0;
	}
	

		for(i=0;i<N;i++){
		while(A[i]%2==0){
			A[i]=A[i]/2;
			ninoinsi[i]++;
		}
	}

	
	kaisuu=ninoinsi[0];
	for(i=1;i<N;i++){
		if(ninoinsi[i]<kaisuu){
		kaisuu=ninoinsi[i];
	}
	}
	
	printf("\n%d\n\n",kaisuu);

	
	return 0;
} 