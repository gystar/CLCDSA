#include<stdio.h>

int main(){
	long long N,A,B;
	long long a[100000];
	long long l;
	long long res=0;
	scanf("%lld%lld%lld",&N,&A,&B);
	for(int i=0;i<N;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<N;i++){
		l=(a[i]-a[i-1])*A;
		if(l<=B){
			res+=l;
		}
		else{
			res+=B;
		}
	}
	printf("%lld",res);
} 