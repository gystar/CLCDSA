#include <stdio.h>
#include <string.h>

#define LEN_WORD 100

int main (void)
{
	/* variables for main process */
	char buffer_word[LEN_WORD];

	// STEP.01
	// read out the targe word
	scanf( "%s", buffer_word );

	// STEP.02
	// output the shortened word
	printf( "%c%d%c\n", buffer_word[0], strlen( buffer_word )-2, buffer_word[ strlen( buffer_word )-1 ] );

	// STEP.TRUE_END
	return 0;
} 