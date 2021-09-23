#include<stdio.h>

long long diff(long long a,long long b){if(a>b){return a-b;}return b-a;}

int main(void){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(diff(a,b) <= 1){printf("Brown\n");}else{printf("Alice\n");}
	return 0;
} 