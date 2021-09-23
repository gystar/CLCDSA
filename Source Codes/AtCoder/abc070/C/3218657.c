#include<stdio.h>

long long int gcm(long long a,long long b){
	long long r,tmp;
	if(a<b){
		tmp=a;
		a=b;
		b=tmp;
	}
	
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}


int main(){
	int N;
	scanf("%d",&N);
	long long T;
	long long ans=1;
	for(int i=0;i<N;i++){
		scanf("%lld",&T);
		ans=(ans/gcm(ans,T))*T;
	}
	printf("%lld\n",ans);
	return 0;
} 