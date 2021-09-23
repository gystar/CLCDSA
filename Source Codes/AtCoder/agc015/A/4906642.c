#include <stdio.h>
#include <stdlib.h>
#define ll long long int
int main(void){
	ll N,A,B,ans;
	scanf("%lld%lld%lld",&N,&A,&B);
	if(A>B)ans=0;
	else if(N==1 && A==B)ans=1;
	else if(N==1)ans=0;
	else{
		ans = B*(N-1)+A-(A*(N-1)+B)+1;
	}
	
	printf("%lld",ans);
	return 0;
} 