#include<stdio.h>
int main(){
	long long int N,A,B,n,i,j,t,num=0;
	scanf("%lld%lld%lld",&N,&A,&B);
	scanf("%lld",&n);
	t=n;
	for(i=0;i<N-1;i++){
		scanf("%lld",&n);
		if((n-t)*A<B){
			num+=(n-t)*A;
		}
		else{
			num+=B;
		}
		t=n;
	}
	printf("%lld",num);
	return 0;
} 