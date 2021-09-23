#include <stdio.h>
#include <stdlib.h>

int q(const long *a,const long *b)
{
	return *a-*b;
}

int main(void)
{
	long n[3],i;
	for(i=0;i<3;i++)scanf("%ld",&n[i]);
	qsort(n,3,sizeof(long),q);
	printf("%ld",n[0]*n[1]*((n[2]+1)/2)-n[0]*n[1]*(n[2]/2));
	return 0;
} 