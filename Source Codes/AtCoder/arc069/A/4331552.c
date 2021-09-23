#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	long long int m,n,num;//n?S,m?C 
	scanf("%lld %lld",&n,&m);
	if(2*n<m){
		num=(2*n+m)/4;
	}else if(2*n==m){
		num=n;
	}else{
		num=m/2;
	}
	printf("%lld",num);
	return 0;
} 