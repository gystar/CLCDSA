#include <stdio.h>
#include <stdlib.h>
int main(void){
	int N,P,i,A,even=1;
	long long ans;
	scanf("%d%d",&N,&P);
	for(i=0;i<N;i++){
		scanf("%d",&A);
		if(A%2==1)even=0;
	}
	if(even){
		if(P)ans=0;
		else ans=(long long)1<<N;
	}else{
		ans = (long long)1<<N-1;
	}
	printf("%lld",ans);
	return 0;
} 