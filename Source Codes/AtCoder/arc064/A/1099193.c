#include<stdio.h>

int main()
{
	long N,x;
	scanf("%ld",&N);
	scanf("%ld",&x);
	long a[N],i;
	for(i=0;i<N;i++) 	scanf("%ld",&a[i]);
	long eat = 0;
	if(a[0]>x){ eat=a[0]-x; a[0]=x;}
	for(i=0;i<N-1;i++){
		if(a[i]+a[i+1]>x){
		eat += a[i+1]+a[i]-x;
		a[i+1]=x-a[i];}
	}
	printf("%ld\n",eat);
	return 0;
} 