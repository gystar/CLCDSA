#include <stdlib.h>
#include <stdio.h>
#include <math.h> 


int main(void)
{
	int N,*a,i,prefixSum=0;
	scanf("%d",&N);
	a=(int*)malloc(sizeof(int)* (N+3));
	a[0]=0;
	a[N+1]=0;
	for(i=1;i<=N;i++){
		scanf("%d", &a[i]);
		prefixSum+=abs(a[i]-a[i-1]);
	}
	prefixSum+=abs(a[N]-a[N+1]);

	for(i=1;i<=N;i++)
	{
		printf("%d\n",prefixSum-(abs(a[i-1]-a[i])+abs(a[i]-a[i+1]))+abs(a[i-1]-a[i+1]));
	}
	free(a);
	return 0;
} 