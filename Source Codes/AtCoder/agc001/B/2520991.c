#include<stdio.h>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
int main(){
	long long n,m;
	scanf("%lld %lld",&n,&m);
	printf("%lld\n",3*(n-gcd(n,m)));
	return 0;
} 