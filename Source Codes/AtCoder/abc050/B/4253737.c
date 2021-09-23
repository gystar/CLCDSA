#include<stdio.h>
#include<string.h>

int main(){
	int N,t[105],M,P[105],x[105];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&t[i]);
	}
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		scanf("%d%d",&P[i],&x[i]);
	}
	for(int i=0;i<M;i++){
		int res=0;
		for(int j=0;j<N;j++){
			if(P[i]!=j+1){
				res+=t[j];
			}
			else{
				res+=x[i];
			}
		}
		printf("%d\n",res);
		res=0;
	}
} 