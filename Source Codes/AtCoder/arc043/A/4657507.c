#include<stdio.h>

#define N 100000

int main(){
	int n,i;
	long long a,b,s,min=1000000001,max=0,sum=0;
	double p,q;
	scanf("%d%lld%lld",&n,&a,&b);
	for(i=0;i<n;i++){
		s=0;
		scanf("%lld",&s);
		if(min>s)min=s;
		if(max<s)max=s;
		sum+=s;
	}
	if(max-min==0){
		puts("-1");
		return 0;
	}
	p=b/(double)(max-min);
	q=(a*n-sum*p)/(double)n;
	printf("%.9f %.9f\n",p,q);
	return 0;
} 