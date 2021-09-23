#include <stdio.h>
long long  gcd(long long x,long long y){
	if(y==0) return x;
	else return gcd(y,x%y);
}
int main(){
	int t,i;
	long long m,n,c,sum;
	sum=0;
	while(~scanf("%d",&t)){
	scanf("%lld",&m);
	for(i=1;i<t;i++){
		scanf("%lld",&n);
		c=gcd(m,n);
		m=m/c*n;
		}
	printf("%lld\n",m);
	}
} 