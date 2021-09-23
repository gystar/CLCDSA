#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int N, x;
	int a[100000];
	scanf("%d %d", &N, &x);
	int i;
	for(i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	long count = 0;
	
	for ( i = 0; i < (N - 1); i++) {
		if ( (a[i] + a[i+1]) <= x )
			continue;
		else if (x <= a[i]) {
			count += a[i+1];
			count += a[i] - x;
			a[i] = x;
			a[i+1] = 0;
		} else {
			count += (a[i] + a[i+1] - x);
			a[i+1] = x - a[i]; 
		}
	}
	printf("%ld", count);
	
	return 0;
} 