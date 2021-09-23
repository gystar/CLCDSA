#include<stdio.h>

long long x[100000],y[100000];

int main(int argc, char const *argv[]){
	long n,m,i;
	long long w=0,h=0,ans=0,p=1000000007,s;
	scanf("%ld %ld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&x[i]);
	}
	for(i=0;i<m;i++){
		scanf("%lld",&y[i]);
	}
	for(i=1;i<m;i++){
		h+=i*(m-i)%p*(y[i]-y[i-1])%p;
		h%=p;
	}
	for(i=1;i<n;i++){
		w+=i*(n-i)%p*(x[i]-x[i-1])%p;
		w%=p;
	}
	printf("%lld\n",w*h%p);
	return 0;
} 