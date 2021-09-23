#include <stdio.h>
int main(void){
	char S[6];
	int n;
	scanf("%s%d",S,&n);
	printf("%c",S[(n-1)/5]);
	printf("%c\n",S[(n-1)%5]);
	return 0;
} 