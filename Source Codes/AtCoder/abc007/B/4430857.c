#include <stdio.h>
#include <string.h>
int main(void){
	char a[11];
	scanf("%s",a);
	if(strlen(a)>1) printf("a\n");
	else if(strlen(a)==1 && a[0]!='a') printf("a\n");
	else printf("-1\n");
	return 0;
} 