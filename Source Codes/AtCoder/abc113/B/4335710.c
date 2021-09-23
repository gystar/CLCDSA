#include<stdio.h>
#include<math.h>

int main(void)
{
	int N,i,ans=0;
	double T,A,H[1000],diff,minDiff;

	scanf("%d",&N);
	scanf("%lf %lf",&T,&A);

	minDiff=100000;

	for(i= 1;i <= N;i++) {
		scanf ("%lf",&H[i]);
		diff= fabs(A-(T- H[i]*0.006));

		if(diff < minDiff){
			minDiff= diff;
			ans= i;
		}
	}

	printf("%d",ans);

	return 0;
} 