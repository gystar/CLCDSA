#include<stdio.h>
int main(void){
	int N,M;
	scanf("%d%d",&N,&M);
	int a,b;
	int K;
	int A;
	int num[30]={};
	for(a=0;a<N;a++){
		scanf("%d",&K);
		for(b=0;b<K;b++){
			scanf("%d",&A);
			num[A-1]++;
		}
	}
	int like=0;
	for(a=0;a<30;a++){
		if(num[a]==N){
			like++;
		}
	}
	printf("%d",like);
return 0;
} 