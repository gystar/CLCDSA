#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define lli long long int
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define true 1
#define false 0



int main(void){
	int i;
	int n;
	lli t,a;
	lli mltt,mlta,mlt;
	lli anst,ansa;
	scanf("%d",&n);
	scanf("%lld%lld",&t,&a);
	anst = t;ansa = a;
	for(i=1;i<n;i++){
		scanf("%lld%lld",&t,&a);
		mlt = t < a ? anst / t : ansa / a;
		mltt = anst / t;
		if(anst % t)mltt++;
		mlta = ansa / a;
		if(ansa % a)mlta++;
		mlt = max(mltt,mlta);
		anst = t*mlt;ansa = a*mlt;
	}
	printf("%lld\n",anst + ansa );
	return 0;
} 