#include <stdio.h>

int main(){
	int q,h,s,d;
	long long n,a,sum=0;
	
	scanf("%d %d %d %d",&q,&h,&s,&d);
	scanf("%ld",&n);
	
	a=d;
	if(a>s*2) a=s*2;
	if(a>h*4) a=h*4;
	if(a>q*8) a=q*8;
	
	while(n>=2){
		n-=2;
		sum+=a;
	}
	a=s;
	if(a>h*2) a=h*2;
	if(a>q*4) a=q*4;
	while(n>=1){
		n-=1;
		sum+=a;
	}
	a=h;
	if(a>q*2) a=q*2;
	while(n>=0.5){
		n-=0.5;
		sum+=a;
	}
	if(n!=0) sum+=q;
	printf("%ld",sum);

	return 0;
} 