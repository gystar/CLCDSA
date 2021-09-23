#include<stdio.h>
int main(void){
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	if(N>5){
		printf("%d\n",5*B+(N-5)*A);
	}
	else{
		printf("%d\n",N*B);
	}
	return 0;
} 