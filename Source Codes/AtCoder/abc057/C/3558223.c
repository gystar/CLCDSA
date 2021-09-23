#include<stdio.h>

int main(){
	long long N;
	scanf("%lld",&N);
	long long maxi;
	for(long long i=1;i*i<=N;i++){
		if(N%i==0)maxi=i;
	}
	long long A=maxi,a=0;
	long long B=N/maxi,b=0;

	while(B!=0){
		B/=10;
		b++;
	}
	printf("%d\n",b);
	return 0;
} 