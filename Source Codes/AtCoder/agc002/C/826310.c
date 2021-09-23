#include <stdio.h>

#define maxn 1000000

int S[maxn];

int main( void ) {
	int n, l;
	scanf("%i %i", &n, &l);
	
	for( int i = 1; i <= n; i++ ) {
		scanf("%i", &S[i]);
	}
	
	int lidx = -1, ridx = -1;
	for( int i = 1; i < n; i++ ) {
		if( (long long)S[i] + S[i+1] >= l ) {
			lidx = i;
			ridx = i+1;
			break;
		}
	}
	
	if( lidx != -1 ) {
		puts("Possible");
		for( int i = 1; i < lidx; i++ ) {
			printf("%i\n", i);
		}
		for( int i = n-1; i >= ridx; i-- ) {
			printf("%i\n", i);
		}
		
		printf("%i\n", lidx);
	} else {
		puts("Impossible");
	}
	
	return 0;
} 