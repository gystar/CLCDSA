#include <stdio.h>

int main(void){
	char board[50][50];
	int n;
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			board[j][n - i - 1] = getchar();
		}
		getchar();
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			putchar(board[i][j]);
		putchar('\n');
	}
	return 0;
} 