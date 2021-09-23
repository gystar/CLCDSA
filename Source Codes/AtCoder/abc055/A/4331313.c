#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	long long s;
	s=N*800;
	long long z;
	z=N/15*200;
	s-=z;
	printf("%lld",s);
} 