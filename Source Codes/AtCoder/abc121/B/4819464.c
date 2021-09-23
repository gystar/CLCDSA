#include<stdio.h>
int main(void){
	int N,M,C;
	scanf("%d%d%d",&N,&M,&C);
	int B[M];
	int a,b;
	for(a=0;a<M;a++){
		scanf("%d",&B[a]);
	}
	int A[M];
	int correct=0;
	int sum=0;
	for(a=0;a<N;a++){
		for(b=0;b<M;b++){
			scanf("%d",&A[b]);
			sum+=A[b]*B[b];
		}
		sum+=C;
		if(sum>0){
			correct++;
		}
		sum=0;
	}
	printf("%d",correct);
	return 0;
} 