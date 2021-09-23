#include <stdio.h>
int main(void){
	char s[4][8];
	int i,j;
	for(i=0;i<4;i++){
		gets(s[i]);
	}
	for(i=0;i<4;i++){
		for(j=1;j<8;j++){
			printf("%c",s[3-i][7-j]);
		}
		printf("\n");
	}
	return 0;
} 