#include<stdio.h>

int main(){
	char s,t;
	scanf("%c %c",&s,&t);
	if(s-'A'==t-'a')puts("Yes");
	else puts("No");
	return 0;
} 