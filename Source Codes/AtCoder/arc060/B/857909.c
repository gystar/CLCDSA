#include <stdio.h>
long long f(long long b,long long x){
	return x<b?x:f(b,x/b)+x%b;
}
long long g(){
	long long n,s,b=2,r=-1,z;
	scanf("%lld%lld",&n,&s);
	if(n<s)return -1;
	if(n==s)return n+1;
	for(;b*b<=n;b++)if(f(b,n)==s)return b;
	for(b=1;b*b<=n&&b<=s;b++){
		if((n-s)%b==0&&f(z=(n-s)/b+1,n)==s)r=z;
		//if(!~r&&s==1)r=n;
	}
	return r;
}
int main(){printf("%lld\n",g());} 