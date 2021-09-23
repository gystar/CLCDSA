#include<stdio.h>
#include<string.h>

int main(void){
	int l;
	char s[131072];
	scanf("%s",s);
	l = strlen(s);
	if(s[0] == s[l-1]){l++;}
	if(l%2){printf("First\n");}else{printf("Second\n");}
	return 0;
} 