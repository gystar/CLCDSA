#include <stdio.h>

int main (void)
{
	/* variables for main process */
	int N;

	// STEP.01
	// read the target number
	scanf( "%d", &N );

	// STEP.02
	// output wheter `N` is the multiple of `3`
	if( N % 3 == 0 ) {
		printf( "%s\n", "YES" );
	} else {
		printf( "%s\n", "NO" );
	}

	// STEP.TRUE_END
	return 0;
} 