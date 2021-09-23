#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
int compare_long(const void *a, const void *b) {long *A = (long *)a;long *B = (long *)b;if (*A > *B) return 1;if (*A < *B) return -1;return 0;}
int main(void){
	int n;
	scanf("%d",&n);
	ll i,x,a[n],sum=0;
	scanf("%lld",&x);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	qsort(a,n, sizeof(ll), compare_long);
	for(i=0;i<n;i++){
		sum += a[i];
		if(sum>x){
			break;
		}
	}
	if(i==n && sum < x ) i--;
	printf("%lld",i);
	return 0;
} 