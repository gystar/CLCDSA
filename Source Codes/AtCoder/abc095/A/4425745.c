#include <stdio.h>
int main(void){
	char s[4];
	int value=700;
	scanf("%s",s);
	if(s[0]=='o') value+=100;
	if(s[1]=='o') value+=100;
	if(s[2]=='o') value+=100;
	printf("%d\n",value);
	return 0;
} 