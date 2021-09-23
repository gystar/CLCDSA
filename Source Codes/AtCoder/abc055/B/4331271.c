#include<stdio.h>
#include<math.h>
#include<string.h>
#define T 1000000007
int main() {
	long long int a,sum=1;
	scanf("%lld",&a);
	for(int i=1;i<=a;i++){
		sum=(sum*i)%T;
	}
	printf("%lld",sum);
	return 0;
} 