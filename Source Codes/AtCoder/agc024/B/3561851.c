#include<stdio.h>

int main(){
	int N,i,max=0;
	scanf("%d",&N);
	int P[N],a[N+1];
	for(i=0;i<=N;i++)a[i]=0;
	for(i=0;i<N;i++){
		scanf("%d",&P[i]);
		a[P[i]]=a[P[i]-1]+1;
	}
	for(i=0;i<=N;i++)if(max<a[i])max=a[i];
	printf("%d\n",N-max);
	return 0;
} 