#include <stdio.h>
#define MAXL 51

int main(void){
	char square[MAXL][MAXL];
	char square_out[MAXL][MAXL];
	int N, i, j;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		fscanf(stdin, "%s", square[i]);
	}
	for(i = N-1; i >= 0; i--){
		// row loop
		for(j = 0; j < N; j++){
			// column loop
			square_out[j][N-1-i] = square[i][j];
		}
	}
	
	for(i = 0; i < N; i++){
		square_out[i][N] = '\0';
		printf("%s\n", square_out[i]);
	}
	
	return 0;
} 