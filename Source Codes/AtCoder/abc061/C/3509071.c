#include<stdio.h>

int main(){
	long long N,K,sum=0,ans=-1;
	scanf("%lld%lld",&N,&K);
	long long a[N],b[N];
	for(long long i=0;i<N;i++)scanf("%lld%lld",&a[i],&b[i]);
	
	long long h=N;
	long long swapped=0;
	while(h>1 || swapped==1){
		if(h>1)h=h*10/13;
		swapped=0;
		for(long long i=0;i<N-h;i++){
			if(a[i]>a[i+h]){
				long long tmp=a[i];
				a[i]=a[i+h];
				a[i+h]=tmp;
				tmp=b[i];
				b[i]=b[i+h];
				b[i+h]=tmp;
				swapped=1;
			}
		}
	}
	
	for(long long i=0;i<N;i++){
		sum+=b[i];
		if(sum>=K && ans==-1)ans=i;
	}
	printf("%lld\n",a[ans]);
	return 0;
} 