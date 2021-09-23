#include<stdio.h>

int main(){
	int a,i,N,m=0;
	scanf("%d",&N);

	for(i=0;i<N;i++){
		scanf("%d",&a);
		m+=a;
	}
	printf("%d\n",m-N);

	return 0;
} 