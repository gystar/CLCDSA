#include<stdio.h>

int main(){
	long long x,m=1e9+7;
	scanf("%lld",&x);
	long long a,b=1,c,d;
	for(a=1;a<=x;a++){
		b*=a;
		b=b%m;
	} 
	printf("%d",b);
} 