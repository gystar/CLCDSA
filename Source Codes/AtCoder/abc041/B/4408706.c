#include<stdio.h>
int main(){
	long a,b,c,d,e;
	scanf ("%ld%ld%ld",&a,&b,&c);
	d=(a*b)%1000000007;
	e=(c*d)%1000000007;
	printf ("%ld\n",e);
	return 0;
	} 