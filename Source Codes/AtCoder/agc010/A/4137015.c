#include<stdio.h>

int main(){
	long n,a,c=0;
	scanf("%ld",&n);
	while(n-->0){
		scanf("%ld",&a);
		c+=a%2;
	}
	if(c%2==0)puts("YES");
	else if(n%2==1)puts("YES");
	else puts("NO");
	return 0;
} 