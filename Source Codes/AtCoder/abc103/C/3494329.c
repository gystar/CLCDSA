#include <stdio.h>

int main(){
	long long int N;
	long long int i,hoge,ans=0;
	
	scanf("%lld",&N);
	
	for(i=0;i<N;i++){
		scanf("%lld",&hoge);
		ans+=hoge-1;
	}
	
	printf("%lld",ans);
	
	return 0;
} 