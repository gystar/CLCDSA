#include <stdio.h>
int main(void){
	char s[3][4];
	scanf("%s",s[0]);
	scanf("%s",s[1]);
	scanf("%s",s[2]);
	printf("%c%c%c",s[0][0],s[1][1],s[2][2]);
	return 0;
} 