#include<stdio.h>
int main(){
	
	int i,j,k,count=0,A,B,C,X;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&X);
	
	for(i=0;i<=A;i++){
		
	
	for(j=0;j<=B;j++){
		
	
	for(k=0;k<=C;k++){
		
		if(X==500*i+100*j+50*k){
			count++;
	}
	}
	}
	}
	
	printf("\n%d\n\n",count);
	
	
	return 0;
} 