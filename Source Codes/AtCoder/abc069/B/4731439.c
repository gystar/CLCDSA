#include<stdio.h>
#include<string.h>
int main(void){
	
	char s[100];
	
	scanf("%s",s);
	int i=strlen(s);
	
	
	
	printf("\n%c%d%c\n\n",s[0],i-2,s[i-1]);
	
	
	return 0;
} 