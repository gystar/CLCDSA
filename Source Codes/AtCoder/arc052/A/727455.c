#include<stdio.h>
main(){
	char s[10];
	int i;
	scanf("%s",&s);
	for(i=0;i<=9;i++){
		if('0'<=s[i] && '9'>=s[i]){
			putchar(s[i]);
		}
	}
	printf("\n");
	return 0;
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
