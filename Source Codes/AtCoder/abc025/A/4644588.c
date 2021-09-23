#include <stdio.h>
int main(void){
	char s[10];
	int i,a;
	scanf("%s",s);
	scanf("%d",&a);
	printf("%c%c\n",s[(a-1)/5],s[(a-1)%5]);
	return 0;
} 