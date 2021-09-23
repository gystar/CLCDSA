#include<stdio.h>
int N, i, j;
char c[50][50];
int main(){
	scanf("%d\n", &N);
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			c[i][j] = getchar();
		}
		getchar();
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			putchar(c[N-j-1][i]);
		}
		putchar(10);
	}
} 