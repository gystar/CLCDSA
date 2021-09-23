#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b) {
	return *(long long int*)b-*(long long int*)a;
}

int main(void) {
	int n,cnt;
	long long int sum = 0LL;
	long long int *a;
	
	scanf("%d",&n);
	a = (long long int*)malloc(sizeof(long long int)*n);
	for (int i = 0;i < n;i++) {
		scanf("%lld",&a[i]);
		sum += a[i];
	}
	
	qsort(a,n,sizeof(long long int),compare);

	sum -= a[0];
	cnt = 1;
	for (int i = 1;i < n;i++) {
		if (a[i-1] > sum*2) {
			break;
		}
		cnt++;
		sum -= a[i];
	}
	printf("%d\n",cnt);

	return 0;
} 