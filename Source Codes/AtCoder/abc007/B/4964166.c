#include <stdio.h>

int main(void) {
	char str[12];
	scanf("%s",str);
	int leng;
	for(leng=0;str[leng]!='\0';leng++);
	if (str[0]=='a'&&leng==1)printf("-1\n");
	else printf("a\n");
	return 0;
		} 