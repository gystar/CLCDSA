#include<stdio.h>
int main(void)
{
	int i,j;
	char c[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf(" %c",&c[i][j]);
		}
	}
	for(i=3;i>=0;i--){
		for(j=3;j>=0;j--){
			printf("%c ",c[i][j]);
		}
		putchar('\n');
	}
	return 0;
} 