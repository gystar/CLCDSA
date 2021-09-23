#include <stdio.h>
int main(void){
	char a[11];
	scanf("%s",a);
	if(a[0]=='a' && a[1]=='\0') printf("-1\n");
	else printf("a\n");
	return 0;
} 