#include <stdio.h>

int main(void){
	char b[2];
	scanf("%s",&b);
	if(b[0]=='A'){
		printf("T");
	}
	if(b[0]=='T'){
		printf("A");
	}
	if(b[0]=='C'){
		printf("G");
	}
	if(b[0]=='G'){
		printf("C");
	}
	return 0;
} 