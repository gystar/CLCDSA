#include <stdio.h>
int main(void){
	char s[4];
	scanf("%s",s);
	if(s[0]==s[2]) printf("Yes\n");
	else printf("No\n");
	return 0;
} 