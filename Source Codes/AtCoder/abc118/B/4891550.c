#include <stdio.h>
int main(void){
	int N,M;
	int i,j,temp;
	scanf("%d %d",&N,&M);
	int K[30];
	int A[31]={};
	for(i=0;i<N;i++){
		scanf("%d",&K[i]);
		for(j=0;j<K[i];j++){
			scanf("%d",&temp);
			A[temp]++;
		}
	}
	int ans = 0;
	for(i=1;i<M+1;i++){
		if(A[i]==N){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
} 