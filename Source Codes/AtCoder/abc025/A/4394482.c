#include <stdio.h>
int main(void){
	char s[5];
	int i,n;
	scanf("%s",s);
	scanf("%d",&n);
	printf("%c%c\n",s[(n-1)/5],s[(n-1)%5]);
	return 0;
} 